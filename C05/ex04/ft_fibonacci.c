int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (index = ft_fibonacci(index - 1) + ft_fibonacci (index - 2));
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(9));
	return (0);
}