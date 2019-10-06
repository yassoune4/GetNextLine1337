/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:14:56 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/15 12:50:49 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tab1;
	unsigned char	*tab2;

	i = 0;
	tab1 = (unsigned char *)dst;
	tab2 = (unsigned char *)src;
	while (i < n)
	{
		tab1[i] = tab2[i];
		i++;
	}
	return (dst);
}
