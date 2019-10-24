/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 09:18:38 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/22 15:18:49 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	int x;
	
	printf("Number to check: ");
	scanf("%d", &x);
	printf("Next prime after %d is: %d", x, ft_find_next_prime(x));
}
