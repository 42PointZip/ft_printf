/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:17:26 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 13:02:27 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applique la fonction f a chaque caractere de la chaine de caracteres
** passee en parametre. Chaque caractere est passe par adresse a la
** fonction f afin de pouvoir etre modifie si necessaire.
*/

void		ft_striter(char *s, void (*f)(char *))
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL || f == NULL)
		return ;
	while (i < len)
	{
		f(&s[i]);
		i++;
	}
}
