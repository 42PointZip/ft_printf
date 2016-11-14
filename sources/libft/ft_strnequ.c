/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:53:28 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 13:05:32 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int egal;

	if (!s1 || !s2)
		return (0);
	egal = ft_strncmp(s1, s2, n);
	if (egal > 0 || egal < 0)
		return (0);
	return (1);
}
