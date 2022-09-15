#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(void)
{
	int	i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if ( i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i > 9)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
