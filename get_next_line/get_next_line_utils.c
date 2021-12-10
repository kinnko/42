/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:02:04 by ainoue            #+#    #+#             */
/*   Updated: 2021/12/06 13:52:26 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char	*s, int	c)
{
	char	charr;
	size_t	i;

	i = 0;
	charr = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == charr)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*str;
	size_t	total;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(total + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const	*s, size_t	start, size_t	len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0' && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	*get_eof(char	**save)
{
	char	*line;

	if (**save == '\0')
		return (NULL);
	line = ft_substr(*save, 0, ft_strlen(*save));
	if (line == NULL)
		return (NULL);
	return (line);
}
