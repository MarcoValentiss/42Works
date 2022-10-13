#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    char    *c;
    size_t  i;
    
    c = s;
    i = 0;
    while(i < n && c[i])
    {
        c[i] = '\0';
    }
}