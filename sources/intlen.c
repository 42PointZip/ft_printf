/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 12:57:21 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/21 16:43:34 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			intlen(long long int nb)
{
	int		i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb = -nb;
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}