#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*mem;
	size_t	i;
	size_t	cnt;

	cnt = number * size;
	mem = malloc(cnt);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < cnt)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}
