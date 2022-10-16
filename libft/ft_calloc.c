#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *p;
    
    p = (void *)malloc(count * size);
    if (!p)
        return(0);
    
    return (ft_memset(p, 0, count * size));
}