/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:37:46 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/29 20:34:48 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_main(const char *s, va_list args)
{
	int	x;

	x = 0;
	if (*s == '%')
		x += ft_putchar('%');
	else if (*s == 'c')
		x += ft_putchar(va_arg(args, int));
	else if (*s == 's')
		x += ft_putstr(va_arg(args, char *));
	else if (*s == 'd')
		x += ft_putnbr(va_arg(args, int));
	else if (*s == 'i')
		x += ft_putnbr(va_arg(args, int));
	else if (*s == 'u')
		x += ft_putnbr_u(va_arg(args, unsigned int));
	else if (*s == 'X')
		x += ft_hexd_up(va_arg(args, unsigned int));
	else if (*s == 'x')
		x += ft_hexd_low(va_arg(args, unsigned int));
	else if (*s == 'p')
		x += ft_putadresse(va_arg(args, unsigned long));
	return (x);
}

int	ft_printf(const char *s, ...)
{
	int		x;
	va_list	args;

	va_start(args, s);
	x = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			x += ft_main(s, args);
		}
		else
			x += ft_putchar(*s);
		s++;
	}
	va_end(args);
	return (x);
}
