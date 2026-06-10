/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:06:09 by mozay             #+#    #+#             */
/*   Updated: 2025/10/14 10:45:24 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	last;
	int	j;

	i = 1;
	j = 0;
	last = ac - 1;
	while (i < ac)
	{
		j = 0;
		while (av[last][j])
		{
			write (1, &av[last][j], 1);
			j++;
		}
		write (1, "\n", 1);
		last--;
		i++;
	}	
}
