/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:43:04 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/16 18:43:09 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *ndle, size_t len)
{
	int		i;

	i = 0;
	if (ft_strlen(ndle) < 1)
		return ((char*)haystack);
	while (haystack[i] && len > 0)
	{
		if (ft_strlen(ndle) > len)
			return (NULL);
		if (ft_strncmp(haystack + i, ndle, ft_strlen(ndle)) == 0)
			return ((char*)haystack + i);
		i++;
		len--;
	}
	return (NULL);
}
