/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:28:32 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/11/25 05:13:25 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int nbr, int fd)
{
	unsigned int nb;

	if (nbr < 0)
	{
		nb = (unsigned int)-nbr;
		ft_putchar_fd('-', fd);
	}
	else
		nb = (unsigned int)nbr;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}
