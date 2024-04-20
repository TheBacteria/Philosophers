/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:13:40 by mzouine           #+#    #+#             */
/*   Updated: 2024/04/20 17:22:15 by mzouine          ###   ########.fr       */
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
	return ((int)nb);
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
			return (-1);
		i++;
	}
	while (str[i] == '0')
		i++;
    if (str[i] < '0' || str[i] > '9')
        return (-1);
	return (str_to_int(str, i));
}
