/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-05 13:09:24 by mozay             #+#    #+#             */
/*   Updated: 2026-02-05 13:09:24 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

static int	ft_putunknown(char c)
{
	int	count;

	count = 0;
	count += write(1, "%", 1);
	count += write(1, &c, 1);
	return (count);
}

static int	ft_choose(char c, va_list list)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(list, void *)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(list, unsigned int), c));
	else if (c == 'u')
		return (ft_putnbr_u(va_arg(list, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (ft_putunknown(c));
	return (-1);
}

static int	ft_decider(const char *str, va_list list)
{
	int	result;
	int	tmp;

	result = 0;
	tmp = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (!*str)
				return (-1);
			tmp = ft_choose(*str, list);
			if (tmp < 0)
				return (-1);
			result += tmp;
		}
		else
			result += ft_putchar(*str);
		str++;
	}
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		result;

	result = 0;
	if (!str)
		return (-1);
	va_start(list, str);
	result = ft_decider(str, list);
	va_end(list);
	return (result);
}
