/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 19:22:21 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/17 19:22:24 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *ptr_list;

	if (!lst || !f)
		return (NULL);
	if (!(ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	list = ft_lstnew(lst->content, lst->content_size);
	list = f(list);
	ptr_list = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = ft_lstnew(lst->content, lst->content_size)))
		{
			list->next = NULL;
			break ;
		}
		list->next = f(list->next);
		list = list->next;
	}
	return (ptr_list);
}
