/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keep_dest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:01:27 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/25 23:50:17 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	keep_dest(long tmp, long a)
{
	int		i;
	long	digits;

	digits = 1;
	i = 0;
	while (digits > 0)
	{
		if (tmp < digits * a)
			return (i);
		else if (tmp > digits * a - 1 && ++i > 0)
			digits *= a;
	}
	return (i);
}
