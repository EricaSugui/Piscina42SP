/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_thousand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:36:30 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 23:46:45 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

void	ft_thousand(char *c, char *dic, int size)
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
	charge(c, dic, x, size);
}

char	*size_th(char *c, int size)
{
	char *cfirst;

	if (size == 5)
	{
		cfirst = malloc(3);
		cfirst[0] = c[0];
		cfirst[1] = c[1];
		cfirst[2] = '\0';
		return (cfirst);
	}
	else if (size == 6)
	{
		cfirst = malloc(6);
		cfirst[0] = c[0];
		cfirst[1] = c[1];
		cfirst[2] = c[2];
		cfirst[3] = '\0';
		return (cfirst);
	}
	return ("0");
}

void	charge(char *c, char *dic, char *x, int size)
{
	char *cfirst;
	char *cplus;

	cplus = plus(c, size);
	if (size == 4)
	{
		ft_unityf(c[0], x);
		ft_putchar(" thousand");
		ft_putchar(" ");
		ft_hundred(cplus, dic);
	}
	else if (size == 5)
	{
		cfirst = size_th(c, size);
		ft_ten(cfirst, dic);
		ft_putchar(" thousand ");
		ft_hundred(cplus, x);
	}
	else if (size == 6)
	{
		cfirst = size_th(c, size);
		ft_hundred(cfirst, dic);
		ft_putchar(" thousand ");
		ft_hundred(cplus, dic);
	}
}

char	*plus(char *c, int size)
{
	int		i;
	int		j;
	char	*cplus;

	cplus = malloc(3);
	i = 0;
	j = size - 3;
	while (c[j] != '\0')
	{
		cplus[i] = c[j];
		i++;
		j++;
	}
	cplus[i] = '\0';
	return (cplus);
}
