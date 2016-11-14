/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 16:44:47 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 12:44:01 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putstr_n(char *s, int start, int len)
{
	int j;

	j = 0;
	if (!s)
		return ;
	while (s[start] && j < len)
	{
		ft_putchar(s[start]);
		start++;
		j++;
	}
}
