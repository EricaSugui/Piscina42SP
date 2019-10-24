/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:19:08 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/07 21:26:19 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void    ft_ultimate_div_mod(int *a, int *b);

int     main(void)
{
	int *a;
	int *b;
	int c = 18;
	int d = 4;

	a = &c;
	b = &d;

	printf("O endereço do a é: %p\n", a);
	printf("O valor do a é: %d\n", *a);
	printf("O endereço do b é: %p\n", b);
	printf("O valor de b é: %d\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("O endereço do a é: %p\n", a);
	printf("O valor do a / b é: %d\n", *a);
	printf("O endereço do b é: %p\n", b);
	printf("O valor de a mod b é: %d\n", *b);

}
