#include <stdlib.h>
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char *p;

    p = (char *)malloc(sizeof(char) * ft_strlen(s1));
    i = 0;
    j = 0;
    if (!p)
        return (0);
    while (s1[i])
    {
        if ((ft_strchr(set, (int)s1[i])) == 0)
        {
            p[j] = s1[i];
            j++;
        }
        i++;
    }
    return (p);
}