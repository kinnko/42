/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   con_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:57:35 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/26 23:46:23 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	con_di(va_list ap)
{
	int		tmp;
	int		d;
	char	*dest;

	tmp = va_arg(ap, int);
	ft_putnbr_fd(tmp, 1);
	dest = ft_itoa(tmp);
	d = ft_strlen(dest);
	free(dest);
	return (d - 2);
}
