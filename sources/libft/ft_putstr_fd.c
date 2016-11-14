/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 19:30:39 by lasalced          #+#    #+#             */
/*   Updated: 2015/01/03 21:42:38 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int		i;

	i = -1;
	if (!s)
	{
		ft_putstr_fd("(null)", fd);
		return ;
	}
	while (s[++i])
		ft_putchar_fd(s[i], fd);
}
