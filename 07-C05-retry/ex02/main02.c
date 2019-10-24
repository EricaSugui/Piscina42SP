/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:07:59 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/21 10:43:38 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* assert - valida se é verdadeiro.
 * Se a condição for verdadeira, ele passa o código sem alertas.
 * Se a condição for falsa, ele vai dar a mensagem de ABORT.
 * Divirta-se =^.^=
 *
 * int x - para quem prefere ver a validação printada na tela.
 *
 * LEMBRANDO: se seu arquivo não passar pela validação do Assert,
 * ele vai abortar e não vai printar nada. Sinto muito :(
 *******************************************************/

#include <assert.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	assert(25 == ft_iterative_power(5,2));
	assert(16 == ft_iterative_power(4,2));
	assert(0 == ft_iterative_power(0,3));
	
	int	x;
	x = ft_iterative_power(5,2);
	printf("5 ao quadrado é 25 = %d\n", x);
	x = ft_iterative_power(2,3);
	printf("2 ao cubo é 8 = %d\n", x);
	x = ft_iterative_power(4,5);
	printf("4 a quinta é 1024 = %d\n", x);
	x = ft_iterative_power(0,3);
	printf("0 ao cubo é 0 = %d\n", x);
	x = ft_iterative_power(3,1);
	printf("3 a 1 é 3 = %d\n", x);
	x = ft_iterative_power(2,0);
	printf("2 a 0 é 1 = %d\n", x);
	printf("\nQuer entender o que aconteceu aqui?\n");
	printf("Abra esse arquivo no cat ou no vim.\n");
	return (0);
}
