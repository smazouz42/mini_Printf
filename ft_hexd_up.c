/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_HexD_UP.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:53:45 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/28 16:27:11 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_count(unsigned int nb)
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

int	ft_hexd_up(unsigned int n)
{	
	int		count;
	char	*s;

	count = ft_count(n);
	s = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_hexd_up(n / 16);
		ft_putchar(s[(n % 16)]);
	}
	else
		ft_putchar(s[n]);
	return (count);
}
