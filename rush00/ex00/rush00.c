/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:55:37 by azengin           #+#    #+#             */
/*   Updated: 2022/08/28 19:14:08 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int len, char midc, char otherc)
{
	int	count;

	count = 1;
	while (count <= len)
	{
		if (count == 1 || count == len)
		{
			ft_putchar(otherc);
		}
		else
		{
			ft_putchar(midc);
		}
		count++;
	}
	ft_putchar('\n');
}

void	rush(x, y)
{
	int	line;

	line = 1;
	while (line <= y)
	{
		if (line == 1 || line == y)
		{
			ft_print(x, '-', 'o');
		}
		else
		{
			ft_print(x, ' ', '|');
		}
		line++;
	}
}
