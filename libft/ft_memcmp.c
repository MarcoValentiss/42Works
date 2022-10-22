#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t	i;
    unsigned char    *a1;
    unsigned char    *a2;

    a1 = (unsigned char *)s1;
    a2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a1[i] > a2[i])
			return (a1[i] - a2[i]);
		else if (a1[i] < a2[i])
			return (a1[i] - a2[i]);
		i++;
	}
	return (0);
}