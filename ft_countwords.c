/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <sbaktyba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 14:00:00 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/12/17 14:00:02 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	size_t	count;
	int		inside_a_word;

	inside_a_word = 0;
	count = 0;
	while (*str)
	{
		if (!inside_a_word && *str != c)
			count++;
		inside_a_word = (*str == c) ? 0 : 1;
		str++;
	}
	return (count);
}
