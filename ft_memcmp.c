/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:58:56 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/11/25 05:28:40 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*r1;
	unsigned char	*r2;

	r1 = (unsigned char *)s1;
	r2 = (unsigned char *)s2;
	i = 0;
	if ((!s1 && !s2) || n == 0)
		return (0);
	while (n--)
	{
		if (r1[i] != r2[i])
			return (r1[i] - r2[i]);
		i++;
	}
	return (0);
}
