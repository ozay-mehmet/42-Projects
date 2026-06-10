/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:58:56 by mozay             #+#    #+#             */
/*   Updated: 2025/10/01 11:19:41 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	tmp;

	count = 0;
	while (count <= (size / 2))
	{
		tmp = tab[size - 1 - count];
		tab[size - 1 - count] = tab[count];
		tab[count] = tmp;
		count++;
	}
}
