int	ft_is_prime(int nb)
{
	int	i;
	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (2);
	else
		if (ft_is_prime(nb) == 1)
			return (nb);
		while (ft_is_prime(nb) != 1)
		{
			nb += i;
		}
		return (nb);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_find_next_prime(50));
	return (0);
}
