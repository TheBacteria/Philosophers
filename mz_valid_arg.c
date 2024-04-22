/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_valid_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:27:03 by mzouine           #+#    #+#             */
/*   Updated: 2024/04/22 16:33:48 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	mz_valid_arg(void)
{
	ft_putstr_fd("Usage: ./philo \"number_of_philosophers\" ", 2);
	ft_putstr_fd("\"time_to_die time_to_eat time_to_sleep\" ", 2);
	ft_putstr_fd("\"number_of_times_each_philosopher_must_eat\"(optional)\n", 2);
	ft_putstr_fd("all arguments should be a positive number!\n", 2);
}
