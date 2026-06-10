/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:23:15 by mozay             #+#    #+#             */
/*   Updated: 2025/09/29 21:34:54 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec_arr (int *arr, int size, int index, int first);
void	ft_write (char result);
void    increase_number(int *number, int size);
void    ft_print_combn(int n);
int     arr_char_to_int(char *number, int n);

void	ft_write(char result)
{
	write (1, &result, 1);
}

/*void	increase_number(int *number, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_write (number[i] + '0');
		i++;
	}
	if (number[0] != 10 - size)
		write (1, ", ", 2);
}*/

void	ft_print_combn(int n)
{
	int	 arr[10];

	if (n > 0 && n < 10)
	{
		rec_arr (arr, n, 0, 0);
	}
} 

void	rec_arr(int *number, int size, int index, int first)
{
	if (index == size)
	{
		int i = 0;
		while (i < size)
		{
			ft_write (number[i] + '0');
			i++;
		}
		if (number[0] != 10 - size)
			write (1, ", ", 2);
		return ;
	}
	while (first <= 9)
	{
		number[index] = first;
		rec_arr (number, size, index + 1, first + 1);
		first++;
	}
	
}

/*
int	arr_char_to_int(char *number, int n)
{
	int	i;
	int	result;
	int	number_int[1];

	result = 0;
	i = 0;
	while (number[i] != '\0')
	{
		number_int[i] = number[i] - '0';
		i++;
	}
	while (i<n)
	{
		result = result * 10 + number_int[i];
		i++;
	}

	return result;
}
	*/
int	main(void)
{
	ft_print_combn (1);	
}
