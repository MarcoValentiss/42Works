/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:52:26 by azengin           #+#    #+#             */
/*   Updated: 2022/09/14 19:40:31 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	errorcheck(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[0] == '\0' || base [1] == '\0' || base[i] == 127)
			return (1);
		if (base[i] == base[i + 1] && base[i + 1] != '\0')
			return (1);
		if (base[i] <= 32 || base[i] == 43 || base[i] == 45)
			return (1);
	i++;
	}	
	return (0);
}	

void	ft_putnbr_base(int nbr, char *base)
{
	long	size;
	int		error;

	error = errorcheck(base);
	if (error == 1)
		return ;
	size = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		ft_putnbr_base(nbr, base);
	}
	else if (nbr >= size)
	{
		ft_putnbr_base(nbr / size, base);
		ft_putnbr_base(nbr % size, base);
	}
	else
	{
		ft_putchar (base[nbr]);
	}
}
