int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	tmp;

	i = 0;
	len = ft_strlen(str);
	
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[(len - 1) - i];
		str[(len - 1) - i] = tmp;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	test[] = "reverseme if you can";

	printf("%s", ft_strrev(test));
	return (0);
}
