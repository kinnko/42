/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   con_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:57:35 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/25 18:12:30 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	con_di(va_list ap)
{
	int	tmp;
	int	d;

	tmp = va_arg(ap, int);
	ft_putnbr_fd(tmp, 1);
	d = ft_strlen(ft_itoa(tmp));
	return (d - 2);
}
