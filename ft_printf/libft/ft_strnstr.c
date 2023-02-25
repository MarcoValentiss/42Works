/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:24:40 by azengin           #+#    #+#             */
/*   Updated: 2023/01/07 18:04:15 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	else if (len == 0)
		return (0);
	while (haystack[s] != '\0' && s < len)
	{
		i = 0;
		while (haystack[i + s] == needle[i]
			&& haystack[i + s] != '\0' && i + s < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)&haystack[s]);
			i++;
		}
		s++;
	}
	return (0);
}
