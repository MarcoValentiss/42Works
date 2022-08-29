/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:16:32 by azengin           #+#    #+#             */
/*   Updated: 2022/08/30 00:23:26 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print2(int n)
{
	if (n > 9)
	{
		ft_putchar(n / 10 + 48);
		ft_putchar(n % 10 + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n % 10 + 48);
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_print2(first);
			write(1, " ", 1);
			ft_print2(second);
			if (first != 98)
			{
				write(1, ", ", 2);
			}
			second++;
		}
		first++;
	}
	write(1, "\n", 1);
}
/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
