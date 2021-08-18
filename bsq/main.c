/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 23:05:00 by ainoue            #+#    #+#             */
/*   Updated: 2021/03/10 19:38:08 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int		gest_argv(char **argv, char **map, int i)
{
	*map = argv[i];
	return (1);
}

int		main(int argc, char **argv)
{
	t_map	ch;
	char	*map;
	int		i;

	i = 1;
	while (i < argc)
	{
		gest_argv(argv, &map, i);
		if (ft_file_read(map, &ch) == 1)
			get_square(&ch);
		else
			ft_putstr("map error\n");
		i++;
		ft_put_answer(&ch);
	}
	return (0);
}
