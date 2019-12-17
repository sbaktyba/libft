/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaktyba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 02:21:08 by sbaktyba          #+#    #+#             */
/*   Updated: 2019/11/25 05:26:17 by sbaktyba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *start;
	t_list *current;

	start = NULL;
	if (lst)
	{
		start = f(ft_lstnew(lst->content, lst->content_size));
		current = start;
		while ((lst = lst->next))
		{
			current->next = f(ft_lstnew(lst->content, lst->content_size));
			current = current->next;
		}
		return (start);
	}
	return (NULL);
}
