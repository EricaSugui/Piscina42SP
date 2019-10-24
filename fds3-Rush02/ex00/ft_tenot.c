/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tenot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:02:42 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 21:27:03 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <unistd.h>

void	tenot2(int i, char *achei)
{
	while (achei[i + 1] != '\n')
		i++;
	if (achei[i + 1] == '\n')
		achei[i + 1] = '\0';
	i = 0;
	while (achei[i] != ':')
		i++;
	i++;
	while (achei[i] == ' ')
		i++;
	while (achei[i] != '\0')
	{
		write(1, &achei[i], 1);
		i++;
		if (achei[i] == ' ')
		{
			while (achei[i] == ' ')
				i++;
			ft_putchar(" ");
		}
	}
}

int		ft_tenot(char *c, char *dic)
{
	int		i;
	char	*achei;

	if (c[0] > '1' && c[0] <= '9')
	{
		ft_tenplus(c, dic);
		return (0);
	}
	achei = ft_strstr(dic, &c[0]);
	i = 0;
	tenot2(i, achei);
	ft_putchar("\n");
	return (0);
}
