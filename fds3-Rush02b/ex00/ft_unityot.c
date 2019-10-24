/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unityot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:32:06 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 21:46:36 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <unistd.h>

void	unityot2(int i, char *achei)
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

int		ft_unityot(char c, char *dic)
{
	int		i;
	char	*achei;

	if (c == '0')
	{
		ft_putchar("\n");
		return (1);
	}
	ft_putchar(" ");
	achei = ft_strchar(dic, c);
	i = 0;
	while (achei[i + 1] != '\n')
		i++;
	if (achei[i + 1] == '\n')
		achei[i + 1] = '\0';
	i = 0;
	unityot2(i, achei);
	return (0);
}
