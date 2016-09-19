/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_arg_null_s.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 15:33:32 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/21 16:34:50 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_arg_null_s(int i, char c, int j)
{
	while (i < j)
	{
		ft_putchar(c);
		i++;
	}
	return (i);
}
