/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 23:23:31 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/13 23:23:32 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			nbr_of_words(const char *str, char c)
{
	int word;
	int cpt;
	int i;

	word = 0;
	cpt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && word == 0)
		{
			cpt++;
			word = 1;
		}
		else if (str[i] == c)
		{
			word = 0;
		}
		i++;
	}
	return (cpt);
}

static	int			ft_strlc(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		++i;
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s || !c)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char *) * nbr_of_words(s, c) + 1)))
		return (NULL);
	while (j < nbr_of_words(s, c))
	{
		while (s[i] == c)
			i++;
		arr[j] = (char *)malloc(sizeof(char) * (ft_strlc(s + i, c) + 1));
		arr[j] = ft_strncpy(arr[j], s + i, ft_strlc(s + i, c));
		arr[j][ft_strlc(&s[i], c)] = '\0';
		j++;
		while (s[i] != c && s[i])
			i++;
	}
	arr[j] = NULL;
	return (arr);
}
