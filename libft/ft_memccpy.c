/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:41:00 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/16 18:41:06 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tab1;
	unsigned char	*tab2;
	size_t			i;

	tab1 = (unsigned char *)dst;
	tab2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tab1[i] = tab2[i];
		if (tab2[i] == (unsigned char)c)
			return ((void *)tab1 + i + 1);
		i++;
	}
	return (NULL);
}
