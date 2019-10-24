/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:06:59 by exam              #+#    #+#             */
/*   Updated: 2019/10/11 11:41:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rev_print(void)
{
	int n;

	if (n > 0)
		ft_putchar(50);
	else
		ft_putchar('\n');
}

int 	main(void)
{
	rev_print();
	return (0);
}
