/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:43:16 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/16 18:43:22 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;
	int		i;

	ss = (char *)s;
	i = 0;
	while (ss[i])
		i++;
	while (i >= 0)
	{
		if ((char)c == s[i])
			return (ss + i);
		i--;
	}
	return (NULL);
}
