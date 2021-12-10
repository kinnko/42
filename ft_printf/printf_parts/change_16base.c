/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_16base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:56:58 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/27 17:10:20 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

void	change_16ubase(unsigned long long tmp, char *str, unsigned long long a)
{
	unsigned long long	digits;

	digits = 1;
	while (digits > 0)
	{
		if (tmp < digits * a || digits > ULLONG_MAX / 16)
		{
			if ((tmp / digits) > 9)
				*str++ = 'A' + ((tmp / digits) - 10);
			else
				*str++ = '0' + (tmp / digits);
			tmp -= (digits * (tmp / digits));
			digits /= a;
		}
		else
			digits *= a;
	}
	*str = '\0';
}

void	change_16base(unsigned long long tmp, char *str, unsigned long long a)
{
	unsigned long long	digits;

	digits = 1;
	while (digits > 0)
	{
		if (tmp < digits * a || digits > ULLONG_MAX / 16)
		{
			if ((tmp / digits) > 9)
				*str++ = 'a' + ((tmp / digits) - 10);
			else
				*str++ = '0' + (tmp / digits);
			tmp -= (digits * (tmp / digits));
			digits /= a;
		}
		else
			digits *= a;
	}
	*str = '\0';
}
