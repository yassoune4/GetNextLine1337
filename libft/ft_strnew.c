/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:02:11 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/12 16:02:13 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	if (!(s = (unsigned char *)malloc(size + 1)))
		return (NULL);
	while (i <= size)
		s[i++] = 0;
	return ((char *)s);
}
