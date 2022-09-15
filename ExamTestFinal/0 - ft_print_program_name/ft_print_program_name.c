#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	return (0);
}
