/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:33:12 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 21:32:35 by pcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		ver;
	char	dic[1000];

	if (argc != 2)
	{
		ft_putchar("\n");
		return (1);
	}
	fd = open("numbers.dict", O_RDONLY);
	if (fd < 0)
	{
		ft_putchar("Error\n");
		return (1);
	}
	ver = read(fd, &dic, 1000);
	if (ver < 0)
	{
		ft_putchar("Error\n");
		return (1);
	}
	search(argv[1], dic);
}
