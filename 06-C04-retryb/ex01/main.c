/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:41:16 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/14 16:51:42 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("usage: a.out \"string to check\"\n");
		return (1);
	}
	ft_putstr(argv[1]);
	return (0);
}
