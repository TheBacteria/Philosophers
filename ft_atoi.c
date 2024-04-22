/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:13:40 by mzouine           #+#    #+#             */
/*   Updated: 2024/04/22 16:15:26 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

static int	str_to_int(const char *str, int i)
{
	unsigned long long	nb;
	int					count;

	nb = 0;
	count = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
		if (nb > 2147483647)
			return (-1);
	}
	if (str[i] != '\0')
		return (-1);
	return ((int)nb);
}

static	int	mz_is_zero(const char *str)
{
	int i;

	i = 1;
	if(!str[i])
		return (-1);
	while (str[i])
	{
		if (str[i] != '0')
			return (-1);
		i++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			return (mz_is_zero(str));
		i++;
	}
	while (str[i] == '0')
	{
		i++;
		if(!str[i])
			return (0);
	}
	if (str[i] < '0' || str[i] > '9')
		return (-1);
	return (str_to_int(str, i));
}
