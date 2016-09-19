/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_arg_null.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 15:22:19 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/21 16:34:38 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_arg_null(int i, char *c, int j)
{
	while (i < j)
	{
		write(1, c, ft_strlen(c));
		i += ft_strlen(c);
	}
	return (i);
}
