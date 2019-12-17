/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:50:22 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/11/25 05:03:35 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t len;

	if (*little == '\0')
		return ((char *)big);
	len = ft_strlen(little);
	while (*big && len <= n--)
	{
		if (!ft_strncmp(big, little, len))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
