/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 02:16:22 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/11/25 05:00:50 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		strsplit_countwords(char const *s, char c)
{
	size_t	count;
	int		token;

	count = 0;
	token = 0;
	while (*s)
	{
		if (token == 1 && *s == c)
			token = 0;
		if (token == 0 && *s != c)
		{
			token = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t		strsplit_wlen(char const *s, char c)
{
	size_t		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**ret;
	size_t		nb_words;
	size_t		word;

	word = 0;
	if (s == NULL)
		return (NULL);
	nb_words = strsplit_countwords(s, c);
	ret = (char **)malloc(sizeof(char *) * nb_words + 1);
	if (ret == NULL)
		return (NULL);
	while (nb_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		ret[word] = ft_strsub(s, 0, strsplit_wlen(s, c));
		if (ret[word] == NULL)
			return (NULL);
		s = s + strsplit_wlen(s, c);
		word++;
	}
	ret[word] = NULL;
	return (ret);
}
