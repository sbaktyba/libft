/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <sbaktyba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:57:52 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/12/17 13:53:11 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t len)
{
	size_t		i;
	char		*s;
	char		*d;

	i = 0;
	s = (char *)source;
	d = (char *)dest;
	if (source == dest)
		return (dest);
	if (s < d)
		while (len)
		{
			len--;
			*(d + len) = *(s + len);
		}
	else
	{
		while (i < len)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dest);
}
