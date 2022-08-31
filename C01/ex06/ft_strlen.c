#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;
	len = 0;

	while (*(str++) != '\0')
	{
		len++;
	}
	return(len);
}

int	main(void)
{
	char	string[] = "denizdeniz";
	char	*first_p;
	int		len;

	first_p = &string[0];
	len = ft_strlen(first_p);
	printf("length %d\n", len);
}
