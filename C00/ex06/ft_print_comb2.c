/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:16:32 by azengin           #+#    #+#             */
/*   Updated: 2022/08/28 12:57:30 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_cikti(int n)
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
	int	ilk;

	int	ikin;

	ilk = 0;
	while (ilk <= 98)
	{
		ikin = ilk + 1;
		while (ikin <= 99)
		{
			ft_cikti(ilk);
			write(1, " ", 1);
			ft_cikti(ikin);
			if (ilk != 98)
			{
				write(1, ", ", 2);
			}
			ikin++;
		}
		ilk++;
	}
}	
