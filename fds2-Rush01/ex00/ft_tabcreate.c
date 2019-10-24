/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcreate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptanasov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:14:07 by ptanasov          #+#    #+#             */
/*   Updated: 2019/10/13 17:02:13 by ptanasov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

void	ft_sorttab2(char **tab)
{

	ft_prttab(tab);
}

void	ft_sorttab(char **tab)
{
	tab[2][1] = '2';
	tab[2][2] = '3';
	tab[2][3] = '4';
	tab[2][4] = '1';
	tab[3][1] = '3';
	tab[3][2] = '4';
	tab[3][3] = '1';
	tab[3][4] = '2';
	tab[4][1] = '4';
	tab[4][2] = '1';
	tab[4][3] = '2';
	tab[4][4] = '3';
	ft_sorttab2(tab);
}

void	ft_putheader(char **header)
{
	char	**square;
	int		i;

	i = -1;
	square = malloc(6 * sizeof(char *));
	while (i++ < 5)
		square[i] = malloc(6 * sizeof(char));
	ft_puttab(square);
	square[0][1] = *header[0];
	square[0][2] = *header[1];
	square[0][3] = *header[2];
	square[0][4] = *header[3];
	square[1][5] = *header[4];
	square[2][5] = *header[5];
	square[3][5] = *header[6];
	square[4][5] = *header[7];
	square[5][4] = *header[8];
	square[5][3] = *header[9];
	square[5][2] = *header[10];
	square[5][1] = *header[11];
	square[4][0] = *header[12];
	square[3][0] = *header[13];
	square[2][0] = *header[14];
	square[1][0] = *header[15];
	ft_sorttab(square);
}

void	ft_createheader(char *argv)
{
	int		i;
	int		j;
	char	**header;

	header = malloc(16 * sizeof(char *));
	i = 0;
	while (i < 16)
	{
		header[i] = malloc(1 * sizeof(char));
		i++;
	}
	i = 0;
	j = 0;
	while (i <= 30)
	{
		header[j] = &argv[i];
		j++;
		i += 2;
	}
	ft_putheader(header);
}
