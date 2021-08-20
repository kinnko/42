#include "libft.h"

static int	get_isspace(const char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int	get_isnb(const char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (-1);
}

int	count_i(const char *str, int *mult)
{
	int				i;

	i = 0;
	while (get_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			*mult = -1;
	return (i);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				ntmp;
	unsigned long	n;
	unsigned long	limit;
	int				mult;

	n = 0;
	i = 0;
	limit = (unsigned long)(LONG_MAX / 10);
	mult = 1;
	i = count_i(str, &mult);
	ntmp = get_isnb(str[i++]);
	while (ntmp != -1)
	{
		if (mult == 1 && (n > limit || (n == limit && ntmp > LONG_MAX % 10)))
			return (-1);
		else if (mult == -1 && (n > limit
				|| (n == limit && ntmp > LONG_MIN % 10)))
			return (0);
		n = n * 10 + ntmp;
		ntmp = get_isnb(str[i++]);
	}
	return (n * mult);
}
