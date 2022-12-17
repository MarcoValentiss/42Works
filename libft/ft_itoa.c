/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:20:32 by azengin           #+#    #+#             */
/*   Updated: 2022/12/17 20:31:21 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		sign;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	if (n < 0)
		sign = 1;
	if (n < 0)
		n = -n;
	i = ft_count_digits(n);
	result = (char *)malloc((i + sign + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[i + sign] = '\0';
	while (i--)
	{
		result[i + sign] = n % 10 + '0';
		n /= 10;
	}
	if (sign == 1)
		result[0] = '-';
	return (result);
}
