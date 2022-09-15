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
	int		i;
	int 	size;
	char	temp;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		temp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = temp;
		i++;
	}
	return(str);
}

#include <stdio.h>
int	main(void)
{
	char	test[]= "testthisumf";
	printf("%s", ft_strrev(test));
	return (0);
}


