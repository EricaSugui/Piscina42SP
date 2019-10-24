/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 10:17:28 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/21 08:49:51 by esuguimo         ###   ########.fr       */
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

int	ft_recursive_factorial(int nb);

int main()
{
	assert(1 == ft_recursive_factorial(0));
	assert(1 == ft_recursive_factorial(1));
	assert(2 == ft_recursive_factorial(2));
	assert(6 == ft_recursive_factorial(3));
	assert(24 == ft_recursive_factorial(4));
	assert(120 == ft_recursive_factorial(5));
	assert(720 == ft_recursive_factorial(6));

	int  dobro;
	dobro = 2 * 50;
    assert(100 == dobro);
	int	n;
	n = ft_recursive_factorial(4);
	printf(" = %d", n);
	printf("\nQuer entender o que aconteceu aqui?\n");
	printf("Abra esse arquivo no cat ou no vim.\n");
	return (0);
}
