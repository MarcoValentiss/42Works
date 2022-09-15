#include <unistd.h>

int	main(int argc, char **argv)
{
	int last;
	int i;

	i = 0;
	last = argc - 1;
	if (argc >= 2)
	{
		while (argv[last][i] != '\0')
		{
			write(1, &argv[last][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
