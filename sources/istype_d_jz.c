/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istype_d_jz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 15:52:32 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 12:45:51 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long int		istype_d_jz(va_list ap, t_env *env)
{
	long long int	arg;
	size_t			arg2;

	arg = 0;
	if (env->j)
	{
		arg = (long long int)va_arg(ap, intmax_t);
	}
	else if (env->z)
	{
		arg = va_arg(ap, long long int);
		if (arg < 0)
			arg = -arg;
		arg2 = (size_t)arg;
		arg = (long long int)arg;
	}
	(void)arg2;
	return (arg);
}
