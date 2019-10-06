/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 21:06:45 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/19 15:52:09 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		var;
	int		j;
	char	*cpy;

	if (s == NULL)
		return (NULL);
	i = 0;
	var = ft_strlen((char *)s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!(cpy = (char *)malloc(var - i + 1)))
		return (NULL);
	while (s[var] == ' ' || s[var] == '\n' || s[var] == '\t')
		var--;
	j = 0;
	while (i <= var)
	{
		cpy[j] = s[i];
		i++;
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
