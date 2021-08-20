#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t	i;

	i = 0;
	if (len > 0)
	{
		while (i < len)
		{
			*(unsigned char *)&b[i] = '\0';
			i++;
		}
	}
}
