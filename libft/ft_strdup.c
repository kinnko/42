#include "libft.h"

size_t	ft_strlen_strdup(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy_strdup(char *ptr, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strdup(const char *src)
{
	char	*ptr;

	ptr = (char *)malloc(ft_strlen_strdup(src) + 1);
	if (ptr)
		ft_strcpy_strdup(ptr, src);
	else
		return (0);
	return (ptr);
}
