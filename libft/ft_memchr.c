/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 22:31:50 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/05 22:31:53 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tab;
	size_t			i;

	tab = (unsigned char *)s;
	i = 0;
	if (n)
	{
		while (i < n)
		{
			if (*tab == (unsigned char)c)
				return (tab);
			else
				tab++;
			i++;
		}
	}
	return (NULL);
}
