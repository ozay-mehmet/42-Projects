/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:47:48 by mozay             #+#    #+#             */
/*   Updated: 2025/10/12 21:29:52 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char result)
{
	write (1, &result, 1);
}

int	strlen_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	control_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] < 32 || base[i] > 126
			|| base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char a;
	a = (int)a
	int	number_systems[32];
	int	i;
	int	size;

	if (!control_base(base))
		return ;
	size = strlen_base(base);
	nbr = (long)nbr;
	if (nbr < 0)
	{
		ft_putchar ('-');
		nbr *= -1;
	}
	i = 0;
	while (nbr > 0)
	{
		number_systems[i] = base[nbr % size];
		nbr = nbr / size;
		i++;
	}
	while (i >= 0)
	{
		ft_putchar (number_systems[i]);
		i--;
	}
}
