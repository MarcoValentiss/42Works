/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:37:47 by azengin           #+#    #+#             */
/*   Updated: 2022/10/12 21:38:23 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t  strlcpy(char *dst, const char *src, size_t dstsize)
{
    unsigned int    i;
    size_t          srcsize;

    srcsize = ft_strlen(src);
    i = 0;
    if (dstsize != 0)
    {
        while (src[i] != '\0' && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srcsize);
}