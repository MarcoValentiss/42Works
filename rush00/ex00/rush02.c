/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:07:50 by azengin           #+#    #+#             */
/*   Updated: 2022/08/28 15:29:28 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int uzun, int ilkkar, int ortakar, int sonkar)
{
	int	sayac;

	sayac = 1;
	while (sayac <= uzun)
	{
		if (sayac == 1)
		{
			ft_putchar(ilkkar);
		}
		else if (sayac == uzun)
		{
			ft_putchar(sonkar);
		}
		else
		{
			ft_putchar(ortakar);
		}
		sayac++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	yataysira;

	yataysira = 1;
	while (yataysira <= y)
	{
		if (yataysira == 1)
		{
			ft_print(x, 'A', 'B', 'A');
		}
		else if (yataysira == y)
		{
			ft_print(x, 'C', 'B', 'C');
		}
		else
		{
			ft_print(x, 'B', ' ', 'B');
		}
		yataysira++;
	}
}
