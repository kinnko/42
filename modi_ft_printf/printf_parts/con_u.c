/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   con_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:01:03 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/26 23:49:27 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	con_u(va_list ap)
{
	unsigned int	tmp;
	int				d;
	char			*dest;

	tmp = va_arg(ap, unsigned int);
	ft_putnbr_fd(tmp, 1);
	dest = ft_itoa(tmp);
	d = ft_strlen(dest);
	free(dest);
	return (d - 2);
}
