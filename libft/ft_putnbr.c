/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalihi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 20:56:03 by ysalihi           #+#    #+#             */
/*   Updated: 2018/10/14 21:01:04 by ysalihi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n >= 0 && n < 10)
	{
		ft_putchar(n + '0');
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n > -10)
	{
		ft_putchar('-');
		ft_putchar(-1 * n + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(-1 * (n / 10));
		ft_putnbr(n % 10 * -1);
	}
}
