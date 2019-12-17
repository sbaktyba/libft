/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:49:38 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/11/25 05:00:24 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	char *a;
	char *b;

	if (*little == '\0')
		return ((char *)big);
	while (*big)
	{
		a = (char *)big;
		b = (char *)little;
		while (*b && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return ((char *)big);
		big++;
	}
	return (NULL);
}
