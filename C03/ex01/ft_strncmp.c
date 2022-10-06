/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:41:49 by azengin           #+#    #+#             */
/*   Updated: 2022/09/07 10:05:58 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		i++;
	}
	i--;
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_strncmp("HeyYou!", "HeyHey!", 3));
	printf("%d\n", ft_strncmp("HeyYou!", "HeyHyy!", 4));
	printf("%d", ft_strncmp("Heyaaa!", "HeyHeyHey!", 5));
}
