/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:32:58 by azengin           #+#    #+#             */
/*   Updated: 2022/09/08 12:03:40 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_printhex(char *str)
{
	char	t;

	t = 92;
	ft_putchar(t);
	ft_putchar("0123456789abcdef"[*str / 16]);
	ft_putchar("0123456789abcdef"[*str % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_printhex(&str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
