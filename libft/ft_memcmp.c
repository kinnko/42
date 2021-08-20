#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	i = 0;
	tmp = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (i < n)
	{
		if (tmp[i] != tmp2[i])
		{
			return (tmp[i] - tmp2[i]);
		}
		i++;
	}
	return (0);
}
