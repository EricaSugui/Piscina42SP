/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 02:45:32 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/10 13:24:51 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char first;
	char second;

	first = 0;
	second = 0;
	while (first < 100)
	{
		second = first + 1;
		while (second < 100)
		{
			ft_putchar(first / 10 + '0');
			ft_putchar(first % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second / 10 + '0');
			ft_putchar(second % 10 + '0');
			if ((first / 10 != 9) || (first % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
	}
}
