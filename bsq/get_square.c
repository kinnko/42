/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:05:46 by ainoue            #+#    #+#             */
/*   Updated: 2021/03/10 19:55:58 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	change_square2(int max_w, t_map *ch, int i, int j)
{
	int tmp1;
	int tmp2;

	tmp1 = 1 + i - max_w;
	while (tmp1 <= i)
	{
		tmp2 = 1 + j - max_w;
		while (tmp2 <= j)
		{
			g_g[tmp1][tmp2] = ch->full;
			tmp2++;
		}
		tmp1++;
	}
}

void	change_square(int max_w, t_map *ch)
{
	int i;
	int j;

	i = 0;
	while (i < ch->sq)
	{
		j = 0;
		while (j < g_w)
		{
			if (g_dp[i][j] == max_w)
			{
				change_square2(max_w, ch, i, j);
				j = g_w;
				i = ch->sq;
			}
			j++;
		}
		i++;
	}
}

void	get_square2(int *max_w, t_map *ch)
{
	int i;
	int j;

	i = 1;
	while (i < ch->sq)
	{
		j = 1;
		while (j < g_w)
		{
			if (g_g[i][j] == ch->obs)
				g_dp[i][j] = 0;
			else
			{
				g_dp[i][j] = min(g_dp[i - 1][j - 1],
				min(g_dp[i - 1][j], g_dp[i][j - 1])) + 1;
				*max_w = max(*max_w, g_dp[i][j]);
			}
			j++;
		}
		i++;
	}
}

int		get_square(t_map *ch)
{
	int max_w;
	int i;
	int j;

	max_w = 0;
	i = 0;
	while (i < ch->sq)
	{
		j = 0;
		while (j < g_w)
		{
			if (g_g[i][j] == ch->obs)
				g_dp[i][j] = (g_g[i][j] - ch->obs + 1) % 2;
			else
				g_dp[i][j] = (g_g[i][j] - ch->emp + 1) % 2;
			max_w |= g_dp[i][j];
			j++;
		}
		i++;
	}
	get_square2(&max_w, ch);
	change_square(max_w, ch);
	return (max_w);
}
