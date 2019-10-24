/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:41:16 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/14 16:47:34 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str);

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("usage: a.out \"string to check\"\n");
		return (1);
	}
	printf("Using ft_strlen:\t%d\n", ft_strlen(argv[1]));
	printf("Using strlen:\t\t%lu\n", strlen(argv[1]));
	return (0);
}
