/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:17:35 by azengin           #+#    #+#             */
/*   Updated: 2022/09/02 18:45:33 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
/* int	main(void)
{
	char	test[] = {'\0'};

	printf("%d\n", ft_str_is_uppercase("DAHRQ"));
	printf("%d\n", ft_str_is_uppercase("sdaDs"));
	printf("%d\n", ft_str_is_uppercase(test));
}*/
