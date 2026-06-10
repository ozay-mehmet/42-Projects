/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:35:54 by mozay             #+#    #+#             */
/*   Updated: 2025/10/09 15:58:27 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (dest_size <= size)
		return (size + src_size);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{	
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + i);
}

int	main(void)
{
	char	dest[] = "rabia";
	char	src[] = "mehmet";
	printf("%u", ft_strlcat(dest, src, 3));
	printf("\n%s", dest);
}
