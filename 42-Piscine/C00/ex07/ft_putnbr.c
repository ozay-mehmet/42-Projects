#include <unistd.h>

void	ft_putchar(char result)
{
	write (1, &result, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar ('-');
		n *= -1;
	}
	else if (n >= 0 && n <= 9)
		ft_putchar (n + '0');
	else
	{
		ft_putnbr (n / 10);
		ft_putnbr (n % 10);
	}
}

/* Main fonksiyon */
int	main(void)
{
	ft_putnbr (42);
}
