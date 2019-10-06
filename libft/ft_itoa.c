/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 18:36:07 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/14 18:36:09 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nbr)
{
	int		i;
	int		size;
	char	*tab;
	int		sign;

	sign = 1;
	size = ft_the_nbr_of_nbr(nbr);
	if (!size)
		return (NULL);
	if (!(tab = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = size - 1;
	sign = (nbr >= 0) ? 1 : -1;
	while (i >= 0)
	{
		tab[i] = (sign * (nbr % 10)) + '0';
		nbr /= 10;
		if (i == 0 && sign == -1)
			tab[0] = '-';
		i--;
	}
	tab[size] = '\0';
	return (tab);
}
