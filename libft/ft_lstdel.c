/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 21:51:27 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/16 21:51:28 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *fst;

	fst = *alst;
	while (fst)
	{
		tmp = fst->next;
		ft_lstdelone(&fst, del);
		fst = tmp;
	}
	*alst = NULL;
}
