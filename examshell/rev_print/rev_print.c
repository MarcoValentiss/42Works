#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);

	if (i != 0)
	{
		while ((i - 1) >= 0)
		{
			write(1, &str[i - 1], 1);
			i--;
		}
	}
	return (str);
}

int	main(void)
{
	char	test[] = "HalilBerkay";

	ft_rev_print(test);
}
