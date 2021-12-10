/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   con_junction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:00:20 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/25 20:38:40 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	con_junction(va_list ap, t_cflags t_con)
{
	int	d;

	d = -1;
	if (t_con.conversion_flag == 'c')
		d = con_c(ap);
	else if (t_con.conversion_flag == 's')
		d = con_s(ap);
	else if (t_con.conversion_flag == 'p')
		d = con_p(ap);
	else if (t_con.conversion_flag == 'd' || t_con.conversion_flag == 'i')
		d = con_di(ap);
	else if (t_con.conversion_flag == 'u')
		d = con_u(ap);
	else if (t_con.conversion_flag == 'x')
		d = con_x(ap);
	else if (t_con.conversion_flag == 'X')
		d = con_X(ap);
	else if (t_con.conversion_flag == '%')
		write_per('%');
	return (d);
}
