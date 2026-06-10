/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:06:52 by mozay             #+#    #+#             */
/*   Updated: 2025/10/13 15:35:49 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
	{	
		i *= nb;
		nb--;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	 printf("%d", ft_iterative_factorial(0));
	 printf("%s","\n");
	 printf("%d", ft_iterative_factorial(2));
	 printf("%s","\n");
	 printf("%d", ft_iterative_factorial(1));
	 printf("%s","\n");
	 printf("%d", ft_iterative_factorial(4));
	 printf("%s","\n");
	 printf("%d", ft_iterative_factorial(15));
	 printf("%s","\n");
	 printf("%d", ft_iterative_factorial(3));
}
