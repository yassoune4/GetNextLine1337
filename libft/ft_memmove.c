/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:41:31 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/16 18:41:43 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *tab1;
	char *tab2;

	tab1 = (char*)src;
	tab2 = (char*)dst;
	if (tab1 < tab2)
	{
		tab1 = tab1 + len - 1;
		tab2 = tab2 + len - 1;
		while (len > 0)
		{
			*tab2-- = *tab1--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*tab2++ = *tab1++;
			len--;
		}
	}
	return (dst);
}
