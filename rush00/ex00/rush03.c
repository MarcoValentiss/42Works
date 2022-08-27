/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:20:58 by azengin           #+#    #+#             */
/*   Updated: 2022/08/27 21:47:42 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print(int uzun, char ilkkar, char ortakar, char sonkar)
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
		if (yataysira == 1 || yataysira == y)
		{
			ft_print(x, 'A', 'B', 'C');
		}
		else
		{
			ft_print(x, 'B', ' ', 'B');
		}
		yataysira++;
	}
}
