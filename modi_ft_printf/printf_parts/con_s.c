/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   con_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainoue <ainoue.@student.42tokyo.f>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:00:46 by ainoue            #+#    #+#             */
/*   Updated: 2021/10/26 22:30:10 by ainoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	con_s(va_list ap)
{
	char	*tmp;
	char	*str;
	int		i;

	tmp = va_arg(ap, char *);
	if (tmp == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (4);
	}
	i = (int)ft_strlen(tmp) + 1;
	str = (char *)malloc(sizeof(char *) * i);
	*(str + (--i)) = '\0';
	while (--i >= 0)
		*(str + i) = *(tmp + i);
	ft_putstr_fd(str, 1);
	free(str);
	return (ft_strlen(tmp) - 2);
}
