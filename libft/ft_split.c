/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:24:16 by azengin           #+#    #+#             */
/*   Updated: 2022/12/18 19:42:34 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_freeall(char **s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

size_t	ft_wordcnt(const char *s, char d)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != d)
		{
			cnt++;
			while (s[i] && s[i] != d)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

char	*ft_worddup(const char *s, char d)
{
	size_t	len;
	char	*ptr;

	len = 0;
	while (s[len] && s[len] != d)
		len++;
	ptr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}

char	**ft_split(const char *s, char d)
{
	char	**ptr;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_wordcnt(s, d);
	ptr = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!s || !ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len && s[j])
	{
		if (s[j] != d)
		{	
			ptr[i++] = ft_worddup(&(s[j]), d);
			if (!ptr)
				return (ft_freeall(ptr));
			while (s[j] && s[j] != d)
				j++;
		}
		else
			j++;
	}
	return (ptr);
}
