/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 16:12:31 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 12:44:42 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_strjoin_c(char c)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * 2);
	if (!dst)
		return (NULL);
	dst[0] = c;
	dst[1] = '\0';
	return (dst);
}
