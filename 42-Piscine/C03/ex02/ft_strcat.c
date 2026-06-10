/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:11:22 by mozay             #+#    #+#             */
/*   Updated: 2025/10/09 15:31:23 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	dest_size(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != 0)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	size = dest_size(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

int	main(void)
{
	char	str1[] = "rabia";
	char	str2[] = "mehmet";
	printf("%s", ft_strcat(str1, str2));
}
