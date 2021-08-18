/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 22:43:51 by ainoue            #+#    #+#             */
/*   Updated: 2021/03/10 23:38:34 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int		map_check(int i, int j, char *buf)
{
	if (i == 0 && j == 0 && (buf[0] < '0' || buf[0] > '9'))
		return (0);
	if (i == 0 && j >= 4 && buf[0] != '\n')
		return (0);
	else if (buf[0] != '\n' && i == 1)
		g_w++;
	else if (((buf[0] != '\n' && j > g_w) || (buf[0] != '\n' &&
			i > g_ch[0] - '0') || (buf[0] == '\n' && j != g_w)) && i != 0)
		return (0);
	return (1);
}

int		gest_buf(int file)
{
	char	buf[1];
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	while ((size = read(file, buf, 1)) != 0)
	{
		if (i == 0 && j >= 0 && j <= 3 && buf[0] != '\n')
			g_ch[j] = buf[0];
		else if (buf[0] != '\n' && i - 1 < g_ch[0] - '0')
			g_g[i - 1][j] = buf[0];
		if (map_check(i, j, buf) != 1)
			return (0);
		if (buf[0] == '\n' && ++i >= 0)
			j = -1;
		j++;
	}
	if (i == 0)
		return (0);
	return (1);
}

int		ft_file_read(char *filepath, t_map *ch)
{
	int			file;

	file = open(filepath, O_RDWR);
	if (file != -1)
	{
		if (gest_buf(file) == 0)
			return (-1);
		if (g_ch[1] == g_ch[2] || g_ch[2] == g_ch[3] || g_ch[3] == g_ch[1])
			return (-1);
		ch->sq = g_ch[0] - '0';
		ch->emp = g_ch[1];
		ch->obs = g_ch[2];
		ch->full = g_ch[3];
		return (1);
	}
	else
		return (0);
}
