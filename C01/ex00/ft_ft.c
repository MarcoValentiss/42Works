/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:17:03 by azengin           #+#    #+#             */
/*   Updated: 2022/08/31 11:53:50 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_printnmb(int n)
{
	ft_putchar(n / 10 + 48);
	ft_putchar(n % 10 + 48);
}


int	main (void)
{
	int	number;
	int	*nbr;

	nbr = &number;
	ft_ft(nbr);
	ft_printnmb(number);
}*/
