int ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);

	if (nb == 1)
		return (1);
	i = 2;

	while (nb >= i * i)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	printf("%d", ft_sqrt(1));
	return (0);
}
