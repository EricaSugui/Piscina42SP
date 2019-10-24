/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:05:53 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/07 20:11:59 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_ft(int *nbr);

int	main(void)
{
	int *nbr;
	int a;

	nbr = &a;
	ft_ft(nbr);

	printf("Main Memória: %p\n", nbr);
	printf("Valor main: %d\n", *nbr);
}
