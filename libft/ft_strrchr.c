#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*t;
	int		i;
	int		j;

	a = c;
	i = 0;
	j = -1;
	t = 0;
	while (s[i] != '\0')
	{
		while (s[i] != a && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		j = i;
		i++;
	}
	if (a == '\0')
		t = (char *)&s[i];
	else if (j < 0)
		return (t);
	else
		t = (char *)&s[j];
	return (t);
}
