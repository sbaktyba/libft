/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isotherwhitespace.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <sbaktyba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 14:00:23 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/12/17 14:00:26 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isotherwhitespace(char c)
{
	return (c == '\v' || c == '\f' || c == '\r');
}
