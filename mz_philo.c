/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:34:51 by mzouine           #+#    #+#             */
/*   Updated: 2024/04/22 18:58:34 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

static	int	mz_join(t_data *data, t_philo *philo)
{
	int i;
	
	i = 0;
	while (i < data->philos)
	{
		if(pthread_join(philo[i].slave, NULL) != 0)
			return (-1);
		i++;
	}
	return (0);
}

static	int	mz_pcreate(t_data *data, t_philo *philo)
{
	int	i;

	i = 0;
	if (!philo)
		return (-1);
	while (i < data->philos)
	{
		if(pthread_create(&philo[i].slave, NULL, mz_routine, &philo[i]) != 0)
		{
			while (i >= 0)
			{
				pthread_join(philo[i].slave, NULL);
				i--;
			}
			return (-1);
		}
		i++;
	}

	return (0);
}

int	mz_philo(t_data *data, t_philo *philo)
{
	mz_pcreate(data, philo);
	mz_join(data, philo);
	return (0);
}
