/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:20:17 by ainoue            #+#    #+#             */
/*   Updated: 2021/05/03 19:14:16 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*mem;
	size_t	i;
	size_t	cnt;

	cnt = number * size;
	mem = malloc(cnt);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < cnt)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}
