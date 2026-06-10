#include <unistd.h>

void	ft_putchar (char result)
{
	write (1, &result, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	last;

	first = 0;
	while (first <= 98)
	{
		last = first + 1;
		while (last <= 99)
		{
			ft_putchar (first / 10 + '0');
			ft_putchar (first % 10 + '0');
			write (1, &" ", 1);
			ft_putchar (last / 10 + '0');
			ft_putchar (last % 10 + '0');
			if (first != 98)
				write (1, &", ", 2);
			last++;
		}
		first++;
	}
}

/* Main fonksiyon */ 
int	main(void)
{
	ft_print_comb2 ();
}
