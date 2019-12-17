/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:55:50 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/11/25 05:11:11 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *ptr, int value, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		((char *)ptr)[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
