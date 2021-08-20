#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*t;
	int		i;

	a = c;
	i = 0;
	t = NULL;
	while (s[i] != a && s[i] != '\0')
		i++;
	if (s[i] == '\0' && a != '\0')
		;
	else
		t = (char *)&s[i];
	return (t);
}
