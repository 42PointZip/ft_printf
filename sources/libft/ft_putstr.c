/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:42:01 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 13:00:30 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}
