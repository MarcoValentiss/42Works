/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:50:12 by azengin           #+#    #+#             */
/*   Updated: 2022/08/27 23:16:56 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first2(void)
{
	char	a;
	a = '0';
	char	b;
	b = '0';
	while (a != '9' || b != '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, ", ", 2);
		if (b == '9')
		{
			a++;
			b = '0';
		}
		else
		{
			b++;
		}
	}
	write(1, "99", 2);
}

int main()
{
	ft_first2();
	return (0);
}
