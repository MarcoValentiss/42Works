
#include <stdio.h>

size_t word_count(char const *s, char *size, char c)
{
    size_t i;
    size_t counter;

    counter = 0;
    i = 0;
    size[0] = "0";

    while (s[i])
    {
        if (s[i] == c)
        {
            counter++;
            size[counter] = (char)i;
        }
        i++;
    }
    return (counter);
}

char    **ft_split(char const *s, char c)
{
    size_t i;
    size_t c;
    char *size;

    c = word_count(s, size, c);

    while (c > 0)
    {
        
    }


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