void	ft_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int uc;

	i = 0;
	uc = 1;
	ft_lowercase(str);
	while(str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (uc == 1)
			str[i] = str[i] - 32;
			uc = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			uc = 0;
		else
			uc = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	test[] = "salut, comment tu vas ? 42mots tESt";
	printf("%s", ft_strcapitalize(test));
}
