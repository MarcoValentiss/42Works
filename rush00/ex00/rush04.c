/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoroglu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:18:54 by mkoroglu          #+#    #+#             */
/*   Updated: 2022/08/28 19:43:29 by mkoroglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int len, char firstc, char midc, char lastc)
{
	int count;
	count = 1;
	while(count <= len)
	{
		if(count == 1)
		{
			ft_putchar(firstc);
		}
		else if(count == len)
		{
			ft_putchar(lastc);
		}
		else
		{
			ft_putchar(midc);
		}
		counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int line;
	line = 1;
	while(line <= y)
	{
		if(line == 1)
		{
			ft_print(x, 'A', 'B', 'C');	
		}
		else if(line == y)
		{
			ft_print(x, 'C', 'B', 'A');
		}
		else
		{
			ft_print(x, 'B', ' ', 'B');
		}
		line++;
	}
}
