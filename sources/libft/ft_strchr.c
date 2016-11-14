/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:09:06 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 13:01:01 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*a;
	char	b;
	int		i;
	int		j;

	a = (char *)s;
	b = (char)c;
	i = 0;
	j = ft_strlen(a) + 1;
	while (i < j)
	{
		if (a[i] == b)
			return (&a[i]);
		i++;
	}
	return (NULL);
}
