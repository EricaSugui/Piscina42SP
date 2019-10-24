/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:02:12 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/07 21:18:44 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int     *mod);

int main(void)
{
	int a = 10;
	int b = 2;
	int div1 = 10;
	int mod1 = 2;

	int *div = &div1;
	int *mod = &mod1;

	printf("Endereço Div = %p\n", div);
	printf("Valor Div = %d\n", *div);
	printf("Endereço Mod = %p\n", mod);
	printf("Valor Mod = %d\n", *mod);	
 
	ft_div_mod(a, b, div, mod);

	printf("\nEndereço Div = %p\n", div);
	printf("Valor Div = %d\n", *div);
	printf("Endereço Mod = %p\n", mod);
	printf("Valor Mod = %d\n", *mod);	
}
