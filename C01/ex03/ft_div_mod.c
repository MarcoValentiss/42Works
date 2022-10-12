/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:37:10 by azengin           #+#    #+#             */
/*   Updated: 2022/09/01 23:12:37 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		return ;
	}
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	testdiv;
	int	testmod;

	a = 9;
	b = 0;
	printf("%d", a);
	printf("%d", b);
	ft_div_mod(a, b, &testdiv, &testmod);
	printf("%d", testdiv);
	printf("%d", testmod);
	return (0);
}*/
