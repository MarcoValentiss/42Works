/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:04:35 by azengin           #+#    #+#             */
/*   Updated: 2022/09/04 22:24:04 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 5;

	printf("%d", a);
	printf("%d", b);
	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return(0);
}*/
