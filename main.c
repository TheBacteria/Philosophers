/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:06:13 by mzouine           #+#    #+#             */
/*   Updated: 2024/04/20 17:03:10 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int main(int ac, char **av)
{
    t_philo *data;
    
    if (ac != 5 && ac != 6)
    {
        ft_putstr_fd("Error, Please enter valid arguments!\n", 2);
        return (1);
    }
    mz_parser(ac, av, data);
    if (data == NULL)
    {
        ft_putstr_fd("Parsing Error!\n", 2);
        return (1);
    }
    return (0);
}
