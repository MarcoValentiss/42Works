void	ft_putchar(char c);

void	ft_print(int uzun, int ortakar, int digerkar)
{
	int	sayac;

	sayac = 1;
	while (sayac <= uzun)
	{
		if (sayac == 1 || sayac == uzun)
		{
			ft_putchar(digerkar);
		}
		else
		{
			ft_putchar(ortakar);
		}
		sayac++;
	}
	ft_putchar('\n');
}

void	rush(x, y)
{
	int	yataysira;
	yataysira = 1;
	while (yataysira <= y)
	{
		if (yataysira == 1 || yataysira == y)
		{
			ft_print(x, '-', 'o');
		}
		else
		{
			ft_print(x, ' ', '|');
		}
		yataysira++;
	}
}
