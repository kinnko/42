#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	if (src == NULL)
		return ((size_t) NULL);
	i = 0;
	n = 0;
	while (src[n])
		n++;
	if (size < 1)
		return (n);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}
