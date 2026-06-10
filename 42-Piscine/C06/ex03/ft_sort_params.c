/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozay <mozay@student.42kocaeli.com.tr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:20:31 by mozay             #+#    #+#             */
/*   Updated: 2025/10/14 13:50:21 by mozay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *av1, char *av2)
{
	int	i;

	i = 0;
	while (av1[i] != '\0' || av2[i] != '\0')
	{
		if (av1[i] != av2[i])
			return (av1[i] - av2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		write (1, &av[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

void	ft_putarg(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr (av[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if ((ft_strcmp(av[i], av[j]) < 0))
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_putarg (ac, av);
}
