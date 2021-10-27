/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:55:06 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/25 18:11:26 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_printf(const char *sw, ...)
{
	va_list		ap;
	const char	*check;
	int			i;
	int			d;

	va_start(ap, sw);
	check = sw;
	i = 0;
	d = 0;
	while (*(check + i) != '\0')
	{
		if (*(check + i) != '%')
		{
			write(1, check + i, sizeof(*(check + i)));
			++i;
		}
		else
		{
			++i;
			d += con_flags(ap, check + i);
			++i;
		}
	}
	return (i + d);
}
