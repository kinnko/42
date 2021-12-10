/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   con_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:00:33 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/27 15:29:32 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	con_p(va_list ap)
{
	unsigned long	tmp;
	char			*dest;
	int				d;

	tmp = va_arg(ap, unsigned long);
	write(1, "0", 1);
	write(1, "x", 1);
	dest = malloc(sizeof(char *) * (keep_dest(tmp, 16) + 1));
	change_16base(tmp, dest, 16);
	ft_putstr_fd(dest, 1);
	d = ft_strlen(dest);
	free(dest);
	return (d);
}
