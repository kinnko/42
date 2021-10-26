/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   con_x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:01:16 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/25 18:13:20 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	con_X(va_list ap)
{
	long	tmp;
	char	*dest;
	int		d;

	tmp = va_arg(ap, long);
	dest = malloc(sizeof(char *) * (keep_dest(tmp, 16) + 1));
	change_16upbase(tmp, dest, 16);
	ft_putstr_fd(dest, 1);
	d = ft_strlen(dest);
	return (d - 2);
}

int	con_x(va_list ap)
{
	long	tmp;
	char	*dest;
	int		d;

	tmp = va_arg(ap, long);
	dest = malloc(sizeof(char *) * (keep_dest(tmp, 16) + 1));
	change_16base(tmp, dest, 16);
	ft_putstr_fd(dest, 1);
	d = ft_strlen(dest);
	return (d - 2);
}
