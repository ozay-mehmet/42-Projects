/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:44:31 by mozay             #+#    #+#             */
/*   Updated: 2025/10/16 15:34:05 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_iterative(int size, char *dest)
{
	if (size <= 0)
	{
		dest = (char *) malloc (sizeof(char) * size);
		dest = NULL;
		return (0);
	}
	return (1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		total_len;

	dest = NULL;
	i = 0;
	total_len = 0;
	if (ft_iterative(size, dest) == 0)
		return (0);
	while (i < size)
		total_len += ft_strlen (strs[i++]);
	total_len += ft_strlen(sep) * (size - 1);
	dest = (char *) malloc (sizeof(char) * (total_len + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i < size - 1)
			dest = ft_strcat (dest, sep);
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	*dest[] = {"akif", "mehmet", "huzeyfe", "havuz"};
	char	*sep = "\n~\n";
	int	size;
	char	*str;
	int	i;

	size = 3;
	i = 0;
	str = ft_strjoin(size, dest, sep);
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}

	free (str);
}
