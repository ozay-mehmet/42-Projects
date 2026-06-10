/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:31:21 by mozay             #+#    #+#             */
/*   Updated: 2025/10/13 15:40:22 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	 printf("%d", ft_recursive_factorial(0));
	 printf("%s","\n");
	 printf("%d", ft_recursive_factorial(2));
	 printf("%s","\n");
	 printf("%d", ft_recursive_factorial(1));
	 printf("%s","\n");
	 printf("%d", ft_recursive_factorial(4));
	 printf("%s","\n");
	 printf("%d", ft_recursive_factorial(15));
	 printf("%s","\n");
	 printf("%d", ft_recursive_factorial(3));
}

