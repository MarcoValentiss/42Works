#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned char *z;

    z = (unsigned char *)s;
    i = 0;
    
    while(i < n)
    {
        z[i] = '\0';
        i++;
    }
}