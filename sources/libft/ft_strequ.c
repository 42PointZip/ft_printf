/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:49:09 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 13:02:14 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	int egal;

	if (!s1 || !s2)
		return (0);
	egal = ft_strcmp(s1, s2);
	if (egal > 0 || egal < 0)
		return (0);
	return (1);
}
