/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:13:43 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 13:06:10 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	b;
	int		j;

	b = (char)c;
	j = ft_strlen(s);
	while (j >= 0)
	{
		if (s[j] == b)
			return ((char *)&s[j]);
		j--;
	}
	return (NULL);
}
