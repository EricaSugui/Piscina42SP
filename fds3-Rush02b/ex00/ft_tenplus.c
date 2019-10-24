/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tenplus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:22:40 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 21:22:30 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <unistd.h>

void	tenplus2(int i, char *achei)
{
	while (achei[i] != '\n')
		i++;
	if (achei[i] == '\n')
		achei[i] = '\0';
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

void	ft_tenplus(char *c, char *dic)
{
	int		i;
	char	*achei;
	char	*dic_ten;
	char	*x;

	i = 0;
	x = malloc(ft_strlen(dic) * sizeof(char));
	while (dic[i])
	{
		x[i] = dic[i];
		i++;
	}
	dic_ten = ft_strstr(x, "20");
	i = 0;
	while (dic_ten[i] != '9')
		i++;
	while (dic_ten[i] != '\n')
		i++;
	dic_ten[i] = '\0';
	achei = ft_strchar(dic_ten, c[0]);
	i = 0;
	tenplus2(i, achei);
	ft_unityot(c[1], dic);
}
