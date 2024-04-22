/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:06:13 by mzouine           #+#    #+#             */
/*   Updated: 2024/04/22 16:34:42 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int ac, char **av)
{
	t_philo	data;
	
	if (ac != 5 && ac != 6)
	{
		ft_putstr_fd("Error, Please enter 5 or 6 arguments!\n", 2);
		mz_valid_arg();
		return (1);
	}
	if(mz_parser(ac, av, &data) == -1)
		return (-1);
	mz_philo(ac, &data);
	//////////////////////////////////////////////////////////////////////////////////////////

	printf("Number of philosophers: %i\n", data.philos);
	printf("Time to die: %i\n", data.t_die);
	printf("Time to eat: %i\n", data.t_eat);
	printf("Time to sleep: %i\n", data.t_sleep);
	printf("Number of time to eat: %i\n", data.n_to_eat);
	


	//////////////////////////////////////////////////////////////////////////////////////////



	return (0);
}
