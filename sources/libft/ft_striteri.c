/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:12:57 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 13:02:50 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applique la fonction f a chaque caractere de la chaine de caracteres
** passee en parametre en precisant son index en premier argument. Chaque
** caractere est passe par adresse a la fonction f afin de pouvoir etre
** modifie si necessaire.
*/

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL || f == NULL)
		return ;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
