#include "ft_h.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_put_answer(t_map *ch)
{
	int		i;
	int		j;

	i = 0;
	while (i < ch->sq)
	{
		j = 0;
		while (j < g_w)
		{
			ft_putchar(g_g[i][j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
