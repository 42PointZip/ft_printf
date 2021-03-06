/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istype_o.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 15:55:22 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/21 16:48:56 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long int	ft_ll_usigned(va_list ap)
{
	unsigned long long int arg;

	arg = va_arg(ap, unsigned long long int);
	return (arg);
}

static unsigned long int		ft_l_usigned(va_list ap)
{
	unsigned long int arg;

	arg = va_arg(ap, unsigned long int);
	return (arg);
}

static unsigned char			ft_hh_usigned(va_list ap)
{
	unsigned char			arg;

	arg = va_arg(ap, unsigned int);
	return (arg);
}

static unsigned short			ft_h_usigned(va_list ap)
{
	unsigned short arg;

	arg = va_arg(ap, unsigned int);
	return (arg);
}

int								istype_o(va_list ap, t_env *env)
{
	unsigned long long int	arg;
	char					*dst;
	int						i;

	i = 0;
	if (env->ll && env->params != 'O')
		arg = ft_ll_usigned(ap);
	else if (env->l || env->params == 'O')
		arg = (unsigned long long int)ft_l_usigned(ap);
	else if (env->hh)
		arg = (unsigned long long int)ft_hh_usigned(ap);
	else if (env->h)
		arg = (unsigned long long int)ft_h_usigned(ap);
	else if (env->j || env->z)
		arg = istype_o_jz(ap, env);
	else
	{
		arg = va_arg(ap, unsigned int);
		arg = (unsigned long long int)arg;
	}
	dst = ft_conv_octal(arg, env);
	i = ft_print_o_unsigned_number(dst, env);
	return (i);
}
