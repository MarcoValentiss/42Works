/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:23:41 by azengin           #+#    #+#             */
/*   Updated: 2023/01/08 15:14:36 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst != NULL)
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
			i++;
		}
		return (i + 1);
	}
	else
		return (0);
}
