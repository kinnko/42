/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   con_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:59:57 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/25 18:12:38 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	con_flags(va_list ap, const char *check)
{
	t_cflags	t_con;
	int			d;

	t_con.conversion_flag = (char)*check;
	d = con_junction(ap, t_con);
	t_con.conversion_flag = 'a';
	return (d);
}
