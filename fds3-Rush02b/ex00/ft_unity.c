/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:32:06 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 21:48:28 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

void	unity2(int i, char *achei)
{
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

void	ft_unity(char *c, char *dic)
{
	int		i;
	char	*achei;

	achei = ft_strstr(dic, &c[0]);
	i = 0;
	while (achei[i + 1] != '\n')
		i++;
	if (achei[i + 1] == '\n')
		achei[i + 1] = '\0';
	i = 0;
	unity2(i, achei);
	ft_putchar("\n");
}
