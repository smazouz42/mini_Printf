/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_U.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:17:31 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/28 16:18:14 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_numcount_u(unsigned int n)
{
	unsigned int	y;

	y = 1;
	while (n >= 10)
	{
		y++;
		n = n / 10;
	}
	return (y);
}

int	ft_putnbr_u(unsigned int nb)
{
	unsigned int	count;

	count = ft_numcount_u(nb);
	if (nb >= 10)
	{
		ft_putnbr((nb / 10));
		ft_putchar(((nb % 10) + 48));
	}
	else
		ft_putchar(((nb % 10) + 48));
	return (count);
}
