/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 06:59:50 by azengin           #+#    #+#             */
/*   Updated: 2022/09/03 07:31:34 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	Uc;

	Uc = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (Uc == 1)
			{
			str[i] = str[i] - 32;
			Uc = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			Uc = 0;
		}
		else if (str[i] <= 'Z' && str[i] >= 'A' && Uc == 0)
		{
			str[i] = str[i] + 32;
		}
		else
		{
			Uc = 1;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(test));
}
