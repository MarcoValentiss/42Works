/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:39:54 by azengin           #+#    #+#             */
/*   Updated: 2022/09/13 14:55:54 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] > s2[i])
	{
		return (1);
	}
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int size;

	size = argc;
	i = 1;
	if (argc <= 1)
	   return (1);

	while (argc != 1)
	{
		i = 0;
		while (i < argc)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) == 1)
			ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		argc--;
	}
	i = 1;
	while (i < size)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
