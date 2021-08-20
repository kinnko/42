#include "libft.h" 

char	*ft_strnstr(char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && str[i + j] && i + j < len)
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
