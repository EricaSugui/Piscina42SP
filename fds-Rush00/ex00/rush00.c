/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 09:51:39 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/08 21:15:24 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	h = 1;
	while (h <= y)
	{
		w = 1;
		while (w <= x)
		{
			if ((h == 1 || h == y) && (w == 1 || w == x))
				ft_putchar('o');
			else if ((h == 1) || (h == y))
				ft_putchar('-');
			else if ((w == 1 || w == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			w++;
			ft_putchar('\n');
		}
		h++;
	}
}
