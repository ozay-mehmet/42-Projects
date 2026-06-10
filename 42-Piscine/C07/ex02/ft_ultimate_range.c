/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:09:47 by mozay             #+#    #+#             */
/*   Updated: 2025/10/16 15:27:56 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc (sizeof(int) * len);
	if (*range == NULL)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (len);
}

#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	len;
	int	min;
	int	max;

	min = 20;
	max = 45;
	len = ft_ultimate_range(&arr, min, max);
	printf("%d", len);
}
