/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:07:50 by azengin           #+#    #+#             */
/*   Updated: 2022/08/28 19:27:45 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int len, int firstc, int midc, int lastc)
{
	int	count;

	count = 1;
	while (count <= len)
	{
		if (count == 1)
		{
			ft_putchar(firstc);
		}
		else if (count == len)
		{
			ft_putchar(lastc);
		}
		else
		{
			ft_putchar(midc);
		}
		count++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	while (line <= y)
	{
		if (line == 1)
		{
			ft_print(x, 'A', 'B', 'A');
		}
		else if (line == y)
		{
			ft_print(x, 'C', 'B', 'C');
		}
		else
		{
			ft_print(x, 'B', ' ', 'B');
		}
		line++;
	}
}
