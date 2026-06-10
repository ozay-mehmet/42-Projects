/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:59:44 by mozay             #+#    #+#             */
/*   Updated: 2025/10/13 15:43:18 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	final;

	final = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		final *= nb;
		power--;
	}
	return (final);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(1,0));
}
