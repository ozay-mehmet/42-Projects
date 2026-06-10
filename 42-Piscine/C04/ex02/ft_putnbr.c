/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 19:24:07 by mozay             #+#    #+#             */
/*   Updated: 2025/10/12 15:51:49 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char result)
{
	write (1, &result, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, &"-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar ('-');
		nb *= -1;
		ft_putnbr (nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
