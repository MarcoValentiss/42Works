int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);

	while (power - 1 > 0)
	{
		result *= ft_recursive_power(nb, power - 1);
		break ;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(0,0));
	return (0);
}	
