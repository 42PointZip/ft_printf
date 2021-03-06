/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:01:52 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 13:05:43 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

/*
** Alloue (avec malloc(3)) et retourne une chaine de caractere fraiche
** terminee par un '\0'. Chaque caractere de la chaine est initialise a
** '\0'. Si l'allocation echoue, la fonction renvoie NULL.
*/

char		*ft_strnew(size_t size)
{
	size_t	i;
	char	*a;

	i = 0;
	a = (char *)malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);
	while (i < size + 1)
	{
		a[i] = '\0';
		i++;
	}
	return (a);
}
