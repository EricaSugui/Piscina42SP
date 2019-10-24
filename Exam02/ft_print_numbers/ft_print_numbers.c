/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:50:15 by exam              #+#    #+#             */
/*   Updated: 2019/10/11 10:52:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	ft_putchar(48);
	ft_putchar(49);
	ft_putchar(50);
	ft_putchar(51);
	ft_putchar(52);
	ft_putchar(53);
	ft_putchar(54);
	ft_putchar(55);
	ft_putchar(56);
	ft_putchar(57);
}
