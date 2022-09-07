/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:17:39 by azengin           #+#    #+#             */
/*   Updated: 2022/09/07 09:41:04 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] > s2[i])
	{
		return (1);
	}
	else if (s1[i] < s2[i])
	{
		return (-1);
	}
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_strcmp("Hey", "Pork"));
	printf("%d\n", ft_strcmp("Hey", "Hey"));
	printf("%d", ft_strcmp("Pork", "Hey"));
}
