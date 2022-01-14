/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadresse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:07:12 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/28 18:41:33 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_count_n(unsigned long nb)
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

static void	ft_put_adress(unsigned long nb)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb > 15)
	{
		ft_put_adress(nb / 16);
		ft_putchar(s[(nb % 16)]);
	}
	else
		ft_putchar(s[nb]);
}

int	ft_putadresse(unsigned long n)
{
	int		count;

	count = 0;
	count = ft_putstr("0x");
	count += ft_count_n(n);
	ft_put_adress(n);
	return (count);
}
