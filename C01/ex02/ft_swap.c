/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:58:34 by azengin           #+#    #+#             */
/*   Updated: 2022/08/31 12:58:43 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_put2numb(int a, int b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

int	main(void)
{
	int	c;
	int	d;

	c = '3';
	d = '5';
	ft_put2numb(c, d);
	write(1, "\n", 1);
	ft_swap(&c, &d);
	ft_put2numb(c, d);
}
