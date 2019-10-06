/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:27:10 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/22 15:27:11 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_max_min(const int *tab, size_t len, int kind)
{
	int		max_min;
	size_t	i;

	max_min = tab[0];
	i = 0;
	if (kind == 1)
	{
		while (i < len)
		{
			if (tab[i] > max_min)
				max_min = tab[i];
			i++;
		}
		return (max_min);
	}
	else
	{
		while (i < len)
		{
			if (tab[i] < max_min)
				max_min = tab[i];
			i++;
		}
		return (max_min);
	}
}
