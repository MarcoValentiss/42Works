/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:01:50 by azengin           #+#    #+#             */
/*   Updated: 2022/09/02 17:16:49 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{		
		if (str[i] >= 'a' && str[i] <= 'z')
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

	printf("%d\n", ft_str_is_lowercase("dBSAHs"));
	printf("%d\n", ft_str_is_lowercase("fhsafa"));
	printf("%d\n", ft_str_is_lowercase("6417"));
	printf("%d", ft_str_is_lowercase(test));
}*/
