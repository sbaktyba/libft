/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 02:05:17 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/11/25 05:27:20 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char *r;

	r = (char *)malloc(sizeof(char) * size);
	if (r)
	{
		ft_memset(r, 0, size);
		return (r);
	}
	return (0);
}
