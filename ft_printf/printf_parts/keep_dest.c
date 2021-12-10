/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keep_dest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:01:27 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/27 17:11:53 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	keep_dest(unsigned long long tmp, unsigned long long a)
{
	int					i;
	unsigned long long	digits;

	digits = 1;
	i = 0;
	while (digits != 0)
	{
		if (tmp > digits * a - 1 && ++i > 0)
			digits *= a;
		else
			return (i);
	}
	return (i);
}
