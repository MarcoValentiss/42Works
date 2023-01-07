/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:22:42 by azengin           #+#    #+#             */
/*   Updated: 2023/01/07 18:09:32 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_whitespaces(const char *str, int *pointer)
{
	int					i;
	unsigned int		count;

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
	long	sign;
	long	result;

	result = 0;
	sign = ft_whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result = result * sign;
	if (result < -2147483648)
		return (0);
	else if (result > 2147483647)
		return (-1);
	else
		return ((int)result);
}
