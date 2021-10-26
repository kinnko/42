/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_16base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:56:58 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/25 23:55:18 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

void	change_16upbase(long tmp, char *str, long a)
{
	int		i;
	long	digits;
	int		flag;

	flag = 1;
	digits = 1;
	i = 0;
	while (digits > 0)
	{
		if (tmp < digits * a)
		{
			if ((tmp / digits) > 9)
				*str++ = 'A' + ((tmp / digits) - 10);
			else
				*str++ = '0' + (tmp / digits);
			if (tmp == 15)
				break ;
			tmp -= (digits * (tmp / digits));
			digits /= a;
		}
		else if (tmp > digits * a - 1 && ++i > 0)
			digits *= a;
	}
	*str = '\0';
}

void	change_16base(long tmp, char *str, long a)
{
	int		i;
	long	digits;
	int		flag;

	flag = 1;
	digits = 1;
	i = 0;
	while (digits > 0)
	{
		if (tmp < digits * a)
		{
			if ((tmp / digits) > 9)
				*str++ = 'a' + ((tmp / digits) - 10);
			else
				*str++ = '0' + (tmp / digits);
			if (tmp == 15)
				break ;
			tmp -= (digits * (tmp / digits));
			digits /= a;
		}
		else if (tmp > digits * a - 1 && ++i > 0)
			digits *= a;
	}
	*str = '\0';
}
