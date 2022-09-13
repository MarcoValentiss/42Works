int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;

	if (nb == 0)
		return (1);
	else if ( nb < 0)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(-1));
	return (0);
}
