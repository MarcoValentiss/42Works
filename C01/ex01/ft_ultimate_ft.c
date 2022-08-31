/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:53:24 by azengin           #+#    #+#             */
/*   Updated: 2022/08/31 11:55:44 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *********nbr)
{
	*********nbr = 42;
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_printnmb(int n)
{
	ft_putchar(n / 10 + 48);
	ft_putchar(n % 10 + 48);
}
/*int main (void)
{
    int	number;
    int	*nbr;
	int	**nbr1;
	int	***nbr2;
	int	****nbr3;
	int	*****nbr4;
	int	******nbr5;
	int	*******nbr6;
	int	********nbr7;
	int	*********nbr8;

    nbr = &number;
	nbr1 = &nbr;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
    ft_ft(nbr8);
    ft_printnmb(number);
}*/
