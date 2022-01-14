/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:23:53 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/28 16:24:18 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_numcount(long int n)
{
	int	y;

	y = 1;
	if (n < 0)
	{
		y = 2;
		n = -n;
	}
	while (n >= 10)
	{
		y++;
		n = n / 10;
	}
	return (y);
}

int	ft_putnbr(int n)
{
	long int	nb;
	long int	count;

	nb = n;
	count = ft_numcount(n);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr((nb / 10));
		ft_putchar(((nb % 10) + 48));
	}
	else
		ft_putchar(((nb % 10) + 48));
	return (count);
}
