/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 07:39:52 by azengin           #+#    #+#             */
/*   Updated: 2022/09/03 08:05:39 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlen (char *str)
{
	int	len;
	
	len = 0;
	while (str[len] != '\0')
	{
		len++
	}
	return (len);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int dsize = ft_strlen(dest);
	unsigned int i;

	size = ft_strlen(src);
	i = 0;

	if (size != 0)
	{
		while (src[i] != '\0' && i < (dsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (size);
}
