/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 22:37:10 by ainoue            #+#    #+#             */
/*   Updated: 2021/05/03 19:15:43 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	unsigned char	cs;
	int				i;

	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	cs = (unsigned char)c;
	i = 0;
	while (n-- > 0)
	{
		*(ptr + i) = *(ptr2 + i);
		if (*(ptr2 + i) == cs)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
