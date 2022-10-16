#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *cpy;
    int i;
    int size;

    i = 0;
    size = ft_strlen(s1);
    cpy = (char *)malloc(sizeof(char) * (size + 1));

    if (!cpy)
        return(0);

    while (s1[i])
    {
        cpy[i] = s1[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}