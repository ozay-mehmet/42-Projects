/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:09:59 by mozay             #+#    #+#             */
/*   Updated: 2025/10/13 16:07:00 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(20));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(28));
	printf("%d\n", ft_find_next_prime(6));
}
