/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptanasov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:57:07 by ptanasov          #+#    #+#             */
/*   Updated: 2019/10/13 16:51:21 by ptanasov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

char	**ft_puttab(char **tab)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (i <= 5)
	{
		while (j <= 5)
		{
			if (j != 5)
				tab[i][j] = j + '0';
			else
				tab[i][j] = '0';
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}

void	ft_prttab(char **tab)
{
	int		i;
	int		j;

	j = 1;
	i = 1;
	while (i <= 4)
	{
		while (j <= 4)
		{
			ft_putchar(*&(tab[i][j]));
			if (j < 4)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 1;
		i++;
	}
}
