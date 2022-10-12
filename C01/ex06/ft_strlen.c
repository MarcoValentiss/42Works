/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:52:28 by azengin           #+#    #+#             */
/*   Updated: 2022/09/01 23:25:33 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
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
/*int	main(void)
{
	char	string[] = "denizdeniz";
	char	*first_p;
	int		length;

	first_p = &string[0];
	length = ft_strlen(first_p);
	printf("length %d\n", length);
}*/
