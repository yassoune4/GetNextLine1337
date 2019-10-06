/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:14:37 by ysalihi           #+#    #+#             */
/*   Updated: 2018/09/11 19:14:39 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	while (n > 0 && *s2)
	{
		s1[i] = *s2++;
		i++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
