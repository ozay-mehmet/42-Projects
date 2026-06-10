/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:05:11 by mozay             #+#    #+#             */
/*   Updated: 2025/10/13 16:03:57 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(17));
	printf("%d", ft_is_prime(1));
	printf("%d", ft_is_prime(0));
	printf("%d", ft_is_prime(12));
	printf("%d", ft_is_prime(2));
}
