/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddnext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 05:22:28 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/11/25 05:24:14 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddnext(t_list *lst, t_list *elm)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	lst->next = elm;
}
