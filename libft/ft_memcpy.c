#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < len)
	{
		*(char *)&dst[i] = *(char *)&src[i];
		i++;
	}
	return (dst);
}
