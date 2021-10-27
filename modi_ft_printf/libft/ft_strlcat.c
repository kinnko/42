/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:28:57 by ainoue            #+#    #+#             */
/*   Updated: 2021/05/03 19:37:52 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_strlcat(const char *dst)
{
	size_t	i;

	i = 0;
	while (dst[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t t)
{
	size_t	i;
	size_t	j;
	size_t	dstsize;

	i = 0;
	j = 0;
	dstsize = ft_strlen_strlcat(dst);
	if (t < 1)
		return (ft_strlen_strlcat(src) + t);
	while (dst[i] != 0)
		i++;
	while (src[j] != 0 && i < t - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (t < ft_strlen_strlcat(dst))
		return (ft_strlen_strlcat(src) + t);
	return (dstsize + ft_strlen_strlcat(src));
}
