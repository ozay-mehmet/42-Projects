/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:46:57 by mozay             #+#    #+#             */
/*   Updated: 2025/10/06 11:50:45 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert(int a)
{
	char	*ptr;

	ptr = "0123456789abcdef";
	write(1, &ptr[a], 1);
}

void	print_hex(unsigned char str)
{
	write (1, "\\", 1);
	convert(str / 16);
	convert(str % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((unsigned char)str[i] >= 32 && (unsigned char)str[i] < 127))
			print_hex (str[i]);
		else
			write (1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "mehmet\nbeyza";
	ft_putstr_non_printable(str);
}
