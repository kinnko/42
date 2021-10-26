/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   con_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:01:03 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/25 18:13:11 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	con_u(va_list ap)
{
	long	tmp;
	int		d;

	tmp = va_arg(ap, long);
	tmp %= ULONG_MAX;
	ft_putnbr_fd(tmp, 1);
	d = ft_strlen(ft_itoa(tmp));
	return (d - 2);
}
