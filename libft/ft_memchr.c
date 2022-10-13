#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
        size_t  i;
  
    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return (s[i]);
        i++;
    }
    return (0);
}