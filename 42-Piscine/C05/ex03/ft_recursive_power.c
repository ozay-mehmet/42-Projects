/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:19:45 by mozay             #+#    #+#             */
/*   Updated: 2025/10/13 15:45:49 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
		return (nb * (ft_recursive_power(nb, power - 1)));
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(0,5));
}
