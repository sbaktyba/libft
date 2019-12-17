/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <sbaktyba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:52:22 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/12/17 13:56:01 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long long	x;
	int					i;
	int					negative;

	x = 0;
	i = 0;
	negative = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || \
				str[i] == '\r' || str[i] == '\n' || str[i] == ' ')
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		negative = str[i] == '-' ? -1 : 1;
		str++;
	}
	while (*str == 0)
		str++;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
			return (negative * x);
		x = x * 10 + str[i++] - '0';
	}
	return (negative * x);
}
