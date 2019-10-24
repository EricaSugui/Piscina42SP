/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:53:29 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/07 21:01:05 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b);

int		main(void)
{
	int *a;
	int *b;
	int c = 13;
	int d = 29;
	
	a = &c;
	b = &d;
	printf("Endereço de a = %p\n", a);
	printf("Valor de a = %d\n", *a);
	printf("Endereço de b = %p\n", b);
	printf("Valor de b = %d\n", *b);
	ft_swap(a, b);
	printf("\nEndereço de a = %p\n", a);
	printf("Valor de a = %d\n", *a);
	printf("Endereço de b = %p\n", b);
	printf("Valor de b = %d\n", *b);
}
