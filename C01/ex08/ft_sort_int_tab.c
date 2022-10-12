/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:14:11 by azengin           #+#    #+#             */
/*   Updated: 2022/09/02 00:16:09 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*int	main(void)
{
	int	test[5] = {1, 4, 2, 6, 3};
	int	size;
	size = 5;

	ft_sort_int_tab(test, size);

	printf("%d, %d, %d, %d, %d", test[0], test[1], test[2], test[3], test[4]);
}*/
