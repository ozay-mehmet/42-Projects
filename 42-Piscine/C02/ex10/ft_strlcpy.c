/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:52:07 by mozay             #+#    #+#             */
/*   Updated: 2025/10/06 11:48:16 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

int	main(void)
{
	char	str1[10];
	char	str2[] = "mehmet";

	printf("%u", ft_strlcpy(str1, str2, 3));
}
