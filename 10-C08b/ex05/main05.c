/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:34:10 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/21 18:51:32 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int					main(void)
{
	char		*strs[] = {"Hello, world!", "How are you?", "I'm tired", "But I'm happy", "Let's enjoy it"};
	int			ac = 5;
	t_stock_str	*bla;

	bla = ft_strs_to_tab(ac, strs);
	ft_show_tab(bla);
	return (0);
}
