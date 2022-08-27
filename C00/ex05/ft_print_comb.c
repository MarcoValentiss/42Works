/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 09:00:06 by azengin           #+#    #+#             */
/*   Updated: 2022/08/26 09:10:10 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_3numb(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{	
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;

	a = '0';
	while (a <= '7')
	{
		char	b;

		b = a + 1;
		while (b <= '8')
		{
			char	c;
			c = b + 1;
			while (c <= '9')
			{
				ft_3numb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
}
