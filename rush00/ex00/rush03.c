/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:20:58 by azengin           #+#    #+#             */
/*   Updated: 2022/08/28 19:28:10 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print(int len, char firstc, char midc, char lastc)
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
		if (line == 1 || line == y)
		{
			ft_print(x, 'A', 'B', 'C');
		}
		else
		{
			ft_print(x, 'B', ' ', 'B');
		}
		line++;
	}
}
