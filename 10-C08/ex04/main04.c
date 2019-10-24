/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:34:10 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/21 19:08:48 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int					main(void)
{
	char		*strs[] = {"Hello, world!", "How are you?", "I'm tired", "But I'm happy", "Let's enjoy it"};
	int			ac = 5;
	int			i;
	t_stock_str	*bla;

	bla = ft_strs_to_tab(ac, strs);
	i = 0;
	while (i <= ac)
	{
		printf("i = %d, size = %d, str = %s, copy = %s, str end = %p, copy end = %p\n", i, bla[i].size, bla[i].str, bla[i].copy, bla[i].str, bla[i].copy);
		i++;
	}
	return (0);
}
