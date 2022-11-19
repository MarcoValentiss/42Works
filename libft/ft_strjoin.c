#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t size;
    char * final;
    size_t i;
    size_t j;

    size = ft_strlen(s1) + ft_strlen(s2) + 1;
    final = (char *)malloc(sizeof(char) * (size + 1));
    if(!final)
        return (0);
    i = 0;
    while(s1[i])
    {
        final[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        final[i] = s2[j];
        j++;
        i++;
    }
    final[i] = '\0';
    return (final);
}