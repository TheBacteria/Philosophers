/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:09:32 by mzouine           #+#    #+#             */
/*   Updated: 2024/04/20 17:22:41 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>


typedef struct s_philo
{
	int				philos;
	int				die;
	int				eat;
	int				sleep;
	
}					t_philo;

void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *str);

#endif