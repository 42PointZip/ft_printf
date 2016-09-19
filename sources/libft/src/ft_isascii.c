/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:46:08 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/04 10:47:27 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
