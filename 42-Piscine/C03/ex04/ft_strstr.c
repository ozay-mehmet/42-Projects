/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:42:18 by mozay             #+#    #+#             */
/*   Updated: 2025/10/09 15:42:49 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char	*str, char *to_find)
{
	int	first;
	int	second;

	first = 0;
	second = 0;
	if (to_find[first] == '\0')
		return (str);
	while (str[first] != '\0')
	{
		second = 0;
		while (str[first + second] != '\0'
			&& str[first + second] == to_find[second])
			second++;
		if (to_find[second] == '\0')
			return (str + first);
		first++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "merhaba rabia nasılsın";
	char	to_find[] = "rabia";
	printf("%s", ft_strstr(str, to_find));
}
