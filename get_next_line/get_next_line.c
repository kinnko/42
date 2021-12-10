/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:01:23 by ainoue            #+#    #+#             */
/*   Updated: 2021/12/06 14:01:40 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	str_free(char	**str)
{
	free(*str);
	*str = NULL;
	return (1);
}

static size_t	search_nl(char	*s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	return (i);
}

static char	*get_line(char	*nl_flag, char	**save)
{
	char	*tmp;
	char	*line;

	line = ft_substr(*save, 0, search_nl(*save) + 1);
	if (line == NULL)
		return (NULL);
	tmp = ft_substr(*save, search_nl(*save) + 1, ft_strlen(nl_flag + 1));
	if (tmp == NULL)
	{
		if (line != NULL)
			str_free(&line);
		return (NULL);
	}
	str_free(save);
	*save = tmp;
	return (line);
}

static char	*join_line(int	fd, int	*read_size, char	**save, char	**buf)
{
	char	*nl_flag;
	char	*tmp;

	while (*read_size > 0)
	{
		nl_flag = ft_strchr(*save, '\n');
		if (nl_flag != NULL)
			return (get_line(nl_flag, save));
		else
		{
			*read_size = read(fd, *buf, BUFFER_SIZE);
			if (*read_size == -1)
				return (NULL);
			(*buf)[*read_size] = '\0';
			tmp = ft_strjoin(*save, *buf);
			if (tmp == NULL)
				return (NULL);
			str_free(save);
			*save = tmp;
		}
	}
	return (get_eof(save));
}

char	*get_next_line(int	fd)
{
	static char	*save;
	char		*buf;
	char		*line;
	int			read_size;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buf = (char *)malloc((size_t)BUFFER_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	if (save == NULL)
		save = ft_substr("\0", 0, 0);
	if (save == NULL && str_free(&buf) == 1)
		return (NULL);
	read_size = 1;
	line = join_line(fd, &read_size, &save, &buf);
	str_free(&buf);
	if (line == NULL || read_size == -1 || read_size == 0)
	{
		str_free(&save);
		if (read_size == -1 || line == NULL)
			return (NULL);
	}
	return (line);
}
