#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int start;

	start = 0;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if(argv[1][i] == ' ' && argv[1][i + 1] != ' ')
				start = i + 1;
			i++;
		}
		while (argv[1][start] != ' ' && argv[1][start] != '\0')
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
}
