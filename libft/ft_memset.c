/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:44:06 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/04 10:48:51 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*tab;
	size_t			i;

	tab = (char *)b;
	i = 0;
	while (i < len)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
