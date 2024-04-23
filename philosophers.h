/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:09:32 by mzouine           #+#    #+#             */
/*   Updated: 2024/04/23 21:17:21 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include <pthread.h>

typedef struct s_data
{
	int				philos;
	int				t_die;
	int				t_eat;
	int				t_sleep;
	int				n_to_eat;
	int				ac;
	int				death;
	pthread_mutex_t	death_mutex;
}					t_data;

typedef struct s_philo
{
	int				index;
	pthread_t		slave;
	pthread_mutex_t	r_fork;
	pthread_mutex_t	printer;
	int				last_meal;
	int				n_of_meals;
}					t_philo;

void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *str);
int		mz_parser(int ac, char **av, t_data *data);
void	mz_valid_arg(void);
int		mz_philo(t_data *data, t_philo *philo);
void	*mz_routine(void *arg);

#endif