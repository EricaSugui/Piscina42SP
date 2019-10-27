/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:21:24 by exam              #+#    #+#             */
/*   Updated: 2019/10/25 15:43:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putstr(char *str)
{
	int cont;
	cont = 0;

	while(str[cont] != '\0')
	{
		ft_putchar(str[cont]);
		str++;
	}
	return (0);
}

int		aff_first_param(char *str)
{
	ft_putstr(str);
	return (0);
}

int		main(int argc, char *argv[])
{
	while (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	if (argc <= 100)
	{
		aff_first_param(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
