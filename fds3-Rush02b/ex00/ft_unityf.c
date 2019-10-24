/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unityf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:32:06 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 22:07:10 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

void	unityf2(int i, char *achei)
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

int		ft_unityf(char c, char *dic)
{
	int		i;
	char	*achei;

	if (c == '0')
	{
		ft_putchar("\n");
		return (1);
	}
	achei = ft_strchar(dic, c);
	i = 0;
	while (achei[i + 1] != '\n')
		i++;
	if (achei[i + 1] == '\n')
		achei[i + 1] = '\0';
	i = 0;
	unityf2(i, achei);
	return (0);
}
