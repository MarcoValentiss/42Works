/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:30:56 by azengin           #+#    #+#             */
/*   Updated: 2022/09/15 16:13:40 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strrev(char	*str)
{
	int	i;
	int	size;
	char	c;

	i = 0;
	size = ft_strlen(str);
	while (i < (size / 2))
		{
			c  = str[i];
			str[i] = str[(size - 1) - i];
			str[(size - 1) - i] = c;
			i++;
		}
		return (str);
}

int	main(void)
{
char	test[] = "hasan";

printf("%s", ft_strrev(test));
return (0);
}
