/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:17:19 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 23:35:42 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	search(char *c, char *dic)
{
	int size;

	size = ft_strlen(c);
	if (size == 1)
		ft_unity(c, dic);
	else if (size == 2)
	{
		ft_ten(c, dic);
		ft_putchar("\n");
	}
	else if (size == 3)
	{
		ft_hundred(c, dic);
		ft_putchar("\n");
	}
	else if (size >= 4 && size <= 6)
	{
		ft_thousand(c, dic, size);
		ft_putchar("\n");
	}
}
