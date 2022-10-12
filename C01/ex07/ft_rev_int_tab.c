/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:33:54 by azengin           #+#    #+#             */
/*   Updated: 2022/09/01 23:35:50 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	std;

	i = 0;
	while (i < (size / 2))
	{
		std = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = std;
		i++;
	}
}
/*int	main(void)
{
	int	test[6] = {1,2,3,4,5,6};
	int	loop;
	loop = 0;
	while (loop < 6)
	{
		printf("%d", test[loop]);
		loop++;
	}
	ft_rev_int_tab(test, 6);
	write(1, "\n", 1);
	loop = 0;
	while (loop < 6)
	{
		printf("%d", test[loop]);
		loop++;
	}
	return (0);
}*/
