/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:42:46 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/16 18:42:53 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (ft_strlen(s2) < n)
		return (ft_memcmp(s1, s2, ft_strlen(s2) + 1));
	return (ft_memcmp(s1, s2, n));
}
