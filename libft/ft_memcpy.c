#include <stdio.h>
#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *cdst;
    char    *csrc;
    size_t  i;

    cdst = (char *)dst;
    csrc = (char *)src;

    if (!dst && !src)
        return (0);
    i = 0;
    while (i < n)
    {
        cdst[i] = csrc[i];
        i++;
    }
    return (dst);
}