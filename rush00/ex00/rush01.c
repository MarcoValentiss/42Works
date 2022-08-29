/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:19:25 by azengin           #+#    #+#             */
/*   Updated: 2022/08/28 19:27:09 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
	int		line;
	char	t;

	t = 92;
	line = 1;
	while (line <= y)
	{
		if (line == 1)
		{
			ft_print(x, '/', '*', t);
		}
		else if (line == y)
		{
			ft_print(x, t, '*', '/');
		}
		else
		{
			ft_print(x, '*', ' ', '*');
		}
		line++;
	}
}
