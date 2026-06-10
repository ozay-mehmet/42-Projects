/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:13:00 by mozay             #+#    #+#             */
/*   Updated: 2025/10/16 15:25:46 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	dest = (int *) malloc((sizeof(int)) * (max - min));
	if (min >= max)
	{
		dest = NULL;
		return (0);
	}
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 5;
	max = 10;
	arr = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d", arr[i]);
		i++;
	}
}
