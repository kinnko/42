#include "libft.h"

void	cp_substr(const char *s, unsigned int start, size_t len, char *dst)
{
	size_t	i;

	i = 0;
	while (++i - 1 < len)
		*(dst + i - 1) = *(s + start + i - 1);
	*(dst + i - 1) = '\0';
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dst;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		dst = malloc(sizeof(char));
		if (dst == NULL)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	else
	{
		if (start + len > ft_strlen(s))
			len = ft_strlen(s) - start;
		dst = malloc(sizeof(char) * (len + 1));
		if (dst == NULL)
			return (NULL);
		cp_substr(s, start, len, dst);
		return (dst);
	}
}
