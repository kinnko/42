#ifndef FT_H_H
# define FT_H_H

# define __BUFF 8
# define MAX 1400

# include <fcntl.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_map
{
	int				sq;
	char			emp;
	char			obs;
	char			full;
	struct s_map	*next;
}				t_map;
char			g_ch[4];
int				g_dp[MAX][MAX];
char			g_g[MAX][MAX];
int				g_w;

int				max(int a, int b);
int				min(int a, int b);
void			get_square2(int *max_w, t_map *ch);
int				get_square(t_map *ch);
int				ft_file_read(char *filepath, t_map *ch);
void			ft_putstr(char *str);
void			ft_put_answer(t_map *ch);

#endif
