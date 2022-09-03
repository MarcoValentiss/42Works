/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 07:39:52 by azengin           #+#    #+#             */
/*   Updated: 2022/09/03 13:39:56 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen (char *str)
{
	int	len;
	
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int dsize = ft_strlen(dest);
	unsigned int i;

	size = ft_strlen(src);
	i = 0;

	if (size != 0)
	{
		while (src[i] != '\0' && i < (dsize))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size);
}

int	main(void)
{
	char	testsrc[] = "denizengin";
	char	testdest[] = "test";

	printf("%s\n", testsrc);
	printf("%s\n", testdest);

	ft_strlcpy(testdest, testsrc, 10);

	printf("%s\n", testsrc);
	printf("%s\n", testdest);
}
