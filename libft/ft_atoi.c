int	ft_whitespaces(const char *str, int *pointer)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] && str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
			count *= -1;
		}
	i++;
	}	
	*pointer = i;
	return (count);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	result = 0;
	sign = ft_whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	if (result > 2147483647)
	{
		return (-1);
	}
	else if (result < -2147483648)
	{
		return (0);
	}
	return ((int)result);
}