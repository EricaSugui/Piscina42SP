/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptanasov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:30:12 by ptanasov          #+#    #+#             */
/*   Updated: 2019/10/13 13:24:45 by ptanasov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_error(void)
{
	ft_putstr("Error\n");
	return (0);
}

int		ft_testnumbers2(char *arg2, int i, int tr)
{
	i = 0;
	tr = 0;
	while (arg2[i] != '\0')
	{
		if (arg2[i] == '3')
			tr++;
		if (tr > 8)
		{
			ft_error();
			return (0);
		}
		i++;
	}
	ft_createheader(arg2);
	return (0);
}

int		ft_testnumbers(char *arg2, int i)
{
	int		fr;
	int		on;
	int		tw;

	tw = 0;
	fr = 0;
	on = 0;
	i = 0;
	while (arg2[i] != '\0')
	{
		if (arg2[i] == '4')
			fr++;
		if (arg2[i] == '1')
			on++;
		if (arg2[i] == '2')
			tw++;
		if ((fr > 4) || (on > 4) || (tw > 8))
		{
			ft_error();
			return (0);
		}
		i++;
	}
	ft_testnumbers2(arg2, i, tw);
	return (0);
}

int		ft_validation2(char *arg2, int i)
{
	if (((i < 31)) || (((i % 2) == 0) && (arg2[i] == ' ')))
	{
		ft_error();
		return (0);
	}
	if (i >= 32)
	{
		ft_error();
		return (0);
	}
	ft_testnumbers(arg2, i);
	return (0);
}

int		ft_validation(int arg1, char *arg2, int i)
{
	if ((arg1 != 2) || (arg2 == '\0') || (arg2[30] == ' '))
	{
		ft_error();
		return (0);
	}
	while (arg2[i] != '\0')
	{
		if ((arg2[i] != ' ') && (arg2[i] != '1') && (arg2[i] != '2'))
		{
			if (((arg2[i] != '3') && (arg2[i] != '4')) || (i > 32))
			{
				ft_error();
				return (0);
			}
		}
		else if (((i % 2) == 1) && (arg2[i] != ' '))
		{
			ft_error();
			return (0);
		}
		i++;
	}
	ft_validation2(arg2, i);
	return (0);
}
