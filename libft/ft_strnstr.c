#include <stdio.h>

char    *ft_strstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	if (needle[i] == '\0')
	{
		return (haystack);
	}
	while (haystack[s] != '\0' || s <= len)
	{
		i = 0;
		while (haystack[i + s] == needle[i] && haystack[i + s] != '\0')
		{
			if (needle[i + 1] == '\0')
			{
				return (&haystack[s]);
			}
			i++;
		}
		s++;
	}
	return (0);
}