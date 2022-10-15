#include <stdio.h>
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    if ((size_t)dst - (size_t)src < len && dst > src)
    {
        while (len > 0)
        {
            len--;
            ((char *)dst)[len] = ((char *)src)[len];
            
        }
        return (dst);
    }  
    else
    {
     return (ft_memcpy(dst, src, len));
    }

}

int main(void)
{
    char dst[] = "";
    char *src =  dst;
    
    printf("%s", ft_memmove(dst + 3, src, 3));
    return(0);
}
