/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:26:14 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 21:10:12 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_hundred(char *c, char *dic)
{
	int		i;
	char	*x;

	i = 0;
	x = malloc(ft_strlen(dic) * sizeof(char));
	while (dic[i])
	{
		x[i] = dic[i];
		i++;
	}
	ft_unityf(c[0], x);
	ft_putchar(" hundred");
	if (c[1] == '0' && c[2] == '0')
		ft_putchar("\n");
	else if (c[1] == '0' && c[2] != '0')
		ft_unityot(c[2], dic);
	else
	{
		ft_putchar(" ");
		ft_ten(&c[1], dic);
	}
}
