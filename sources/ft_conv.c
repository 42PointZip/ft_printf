/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 17:48:10 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/21 17:48:24 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_conv(va_list ap, t_env *env, t_tab *tab)
{
	int c;

	c = (int)env->params;
	return (tab->tab_ft_conv[c](ap, env));
}
