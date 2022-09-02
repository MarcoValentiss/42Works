/*#include <stdio.h>*/
int	ft_str_is_alpha(char *str)
{
	int	i;
	i = 0;

	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z'
			|| str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int	main(void)
{
	char	test[] = {'\0'};

	printf("%d\n", ft_str_is_alpha("AbftafDF"));
	printf("%d\n", ft_str_is_alpha("Ds0F"));
	printf("%d", ft_str_is_alpha(test));
}*/
