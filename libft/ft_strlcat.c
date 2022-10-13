/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:37:44 by azengin           #+#    #+#             */
/*   Updated: 2022/10/13 19:32:31 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  j;
    size_t  dlen;
    size_t  slen;

    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    i = dlen;
    j = 0;
    if (dstsize == 0 || dstsize <= dlen)
        return (slen + dlen);
    while (src[j] && j < dstsize - dlen - 1)
    {
        dst[i++] = src[j++];
    }
    dst[i] = '\0';
    return (dlen + slen);
}