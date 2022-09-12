#include <unistd.h>

void	ft_rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		{
			if ((str[i] <= 'm' && str[i] >= 'a') || (str[i] <= 'M' && str[i] >= 'A'))
			{
				str[i] += 13;
				write(1, &str[i], 1);
				
			}
			else if ((str[i] > 'm' && str[i] <= 'z') || (str[i] > 'M' && str[i] <= 'Z'))
			{
				str[i] -= 13;
				write(1, &str[i], 1);
			}
			i++;
		}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_13(argv[1]);
	write(1, "\n", 1);
}
