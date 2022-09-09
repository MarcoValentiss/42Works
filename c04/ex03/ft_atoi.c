/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:58:53 by azengin           #+#    #+#             */
/*   Updated: 2022/09/09 17:45:37 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_whitespaces(char *str, int *pt_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while (str[i])
	{
		while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		{
			i++;
		}
		while (str[i] && (str[i] == 43 || str[i] == 45))
		{
			i++;
			if (str[i] == 45)
			{
				count *= -1;
			}
		}
	}
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	
	sign = ft_whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{



