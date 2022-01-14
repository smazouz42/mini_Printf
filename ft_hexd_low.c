/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_HexD_Low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:35:09 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/28 16:28:02 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_count_l(unsigned int nb)
{
	unsigned int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
	nb = nb / 16;
		i++;
	}
	return (i);
}

int	ft_hexd_low(unsigned int n)
{
	int		count;
	char	*s;

	count = ft_count_l(n);
	s = "0123456789abcdef";
	if (n > 15)
	{
		ft_hexd_low(n / 16);
		ft_putchar(s[(n % 16)]);
	}
	else
		ft_putchar(s[n]);
	return (count);
}
