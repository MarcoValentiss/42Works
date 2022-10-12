/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 06:59:50 by azengin           #+#    #+#             */
/*   Updated: 2022/09/07 19:20:08 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowercaseall(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] <= 'Z' && str[a] >= 'A')
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	uc;

	i = 0;
	uc = 1;
	ft_lowercaseall(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (uc == 1)
				str[i] = str[i] - 32;
				uc = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			uc = 0;
		else
		{			
			uc = 1;
		}
		i++;
	}
	return (str);
}
