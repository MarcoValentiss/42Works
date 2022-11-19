#include <stdio.h>
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char	*source;
	char	*dest;
	size_t	i;
	
	source = (char *)src;
	dest = (char *)dst;
	i = 0;
	if (!source && !dest)
		return (0);
	else if (dest > source)
	{
		while (len-- > 0)
		{
			dest[len] = source[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return(dst);
}
