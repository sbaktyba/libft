/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <sbaktyba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:48:54 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/12/17 13:51:54 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*last_position;

	last_position = (0);
	while (*s)
	{
		if (*s == c)
			last_position = (char*)s;
		++s;
	}
	if (last_position)
		return (last_position);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
