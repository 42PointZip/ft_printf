/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 17:42:45 by lasalced          #+#    #+#             */
/*   Updated: 2016/03/28 12:55:22 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description
** Ajoute l'element new en tete de la liste.
** Param. #1
** L'adresse d'un pointeur sur le premier maillon d'une liste.
** Param. #2
** Le maillon a ajouter en tete de cette liste.
*/

void		ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
