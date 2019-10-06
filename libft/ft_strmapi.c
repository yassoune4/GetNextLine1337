/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 11:58:51 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/16 11:58:59 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(new = (char *)malloc(sizeof(char) * ft_strlen((char*)s) + 1)))
		return (NULL);
	while (*s)
	{
		new[i] = f(i, *s++);
		i++;
	}
	new[i] = '\0';
	return (new);
}
