/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:44:08 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/11/25 05:05:21 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	size_t	i;
	char	*ret;

	i = 0;
	if ((ret = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)) != NULL)
	{
		while (s1[i])
		{
			ret[i] = s1[i];
			i++;
		}
		ret[i] = '\0';
		return (ret);
	}
	return (NULL);
}
