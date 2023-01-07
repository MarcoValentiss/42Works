/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:23:50 by azengin           #+#    #+#             */
/*   Updated: 2023/01/07 20:27:50 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*dest;
	size_t	i;

	source = (char *)src;
	dest = (char *)dst;
	i = 0;
	if (!source && !dest)
		return (0);
	else if (dest > source)
	{
		while (len-- > 0)
		{
			dest[len] = source[len];
		}
	}
	else
	{
		while (len > 0)
		{
			*dest++ = *source++;
			len--;
		}
	}
	return (dst);
}
