/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:46:33 by mzouine           #+#    #+#             */
/*   Updated: 2024/04/22 16:36:01 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	mz_parser(int ac, char **av, t_philo *data)
{
	data->ac = ac;
	data->philos = ft_atoi(av[1]);
	data->t_die = ft_atoi(av[2]);
	data->t_eat = ft_atoi(av[3]);
	data->t_sleep = ft_atoi(av[4]);
	if (ac == 6)
		data->n_to_eat = ft_atoi(av[5]);
	if (data->philos < 1)
	{
		ft_putstr_fd("Error!\nNumber of philosophers is not valid!\n", 2);
		mz_valid_arg();
		return (-1);
	}
	if (data->t_die < 0 || data->t_eat < 0 || data->t_sleep < 0 || data->n_to_eat < 0)
	{
		ft_putstr_fd("Error!\nInvalid number used as argument!\n", 2);
		mz_valid_arg();
		return (-1);
	}
	return (0);
}
