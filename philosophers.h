/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:09:32 by mzouine           #+#    #+#             */
/*   Updated: 2024/04/22 16:36:32 by mzouine          ###   ########.fr       */
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
	int				t_die;
	int				t_eat;
	int				t_sleep;
	int				n_to_eat;
	int				ac;
}					t_philo;

void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *str);
int		mz_parser(int ac, char **av, t_philo *data);
void	mz_valid_arg(void);
int		mz_philo(t_philo *data);

#endif