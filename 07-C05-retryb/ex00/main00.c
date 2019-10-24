/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 05:38:52 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/23 02:31:37 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* assert - valida se é verdadeiro.
 * Se a condição for verdadeira, ele passa o código sem alertas.
 * Se a condição for falsa, ele vai dar a mensagem de ABORT.
 * Divirta-se =^.^=
 *
 * dobro - apenas uma validação simples e mequetrefe.
 *
 * int n - para quem prefere ver a validação printada na tela.
 *
 * LEMBRANDO: se seu arquivo não passar pela validação do Assert,
 * ele vai abortar e não vai printar nada. Sinto muito :(
 */

#include <assert.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int main()
{
	assert(1 == ft_iterative_factorial(0));
	assert(1 == ft_iterative_factorial(1));
	assert(2 == ft_iterative_factorial(2));
	assert(6 == ft_iterative_factorial(3));
	assert(24 == ft_iterative_factorial(4));
	assert(120 == ft_iterative_factorial(5));
	assert(720 == ft_iterative_factorial(6));

	int  dobro;
	dobro = 2 * 50;
//  dobro = 3 * 50;
    assert(100 == dobro);
	int	n;
	n = ft_iterative_factorial(4);
	printf(" = %d\n", n);
	printf("\nQuer entender? leia o aquivo main no cat ou vim.");

	return (0);
}
