/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nmb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-05 16:38:38 by mozay             #+#    #+#             */
/*   Updated: 2026-02-05 16:38:38 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(-n);
	}
	else if (n > 9)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_putnbr_u(n / 10);
		count += ft_putnbr_u(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}

int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += write(1, "0x", 2);
	count += ft_puthex((unsigned long long)ptr, 'p');
	return (count);
}

int	ft_puthex(unsigned long long n, char c)
{
	int	count;

	count = 0;
	if (c == 'p' && n == 0)
		return (write(1, "(nil)", 5));
	if (n >= 16)
		count += ft_puthex(n / 16, c);
	if (c == 'x' || c == 'p')
		count += ft_putchar("0123456789abcdef"[n % 16]);
	else if (c == 'X')
		count += ft_putchar("0123456789ABCDEF"[n % 16]);
	return (count);
}
