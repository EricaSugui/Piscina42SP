/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:24:29 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/21 08:48:38 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* assert - valida se é verdadeiro.
 * Se a condição for verdadeira, ele passa o código sem alertas.
 * Se a condição for falsa, ele vai dar a mensagem de ABORT.
 * Divirta-se =^.^=
 *
 * int valor - para quem prefere ver a validação printada na tela.
 *
 * LEMBRANDO: se seu arquivo não passar pela validação do Assert,
 * ele vai abortar e não vai printar nada. Sinto muito :(
 *******************************************************/

#include <assert.h>
#include <stdio.h>

int	ft_sqrt(int nb);

int main(void)
{
	assert(2 == ft_sqrt(4));
	assert(0 == ft_sqrt(5));
	assert(0 == ft_sqrt(7));
	assert(3 == ft_sqrt(9));
	assert(0 == ft_sqrt(27));

	int valor;
	printf("digite um número: ");
	scanf("%d", &valor);
	printf("A raiz quadradade é %d\n",ft_sqrt(valor));
	printf("\nQuer entender o que aconteceu aqui?\n");
	printf("Abra esse arquivo no cat ou no vim.\n");	
	return (0);
}
