/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 08:38:55 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/21 08:57:15 by esuguimo         ###   ########.fr       */
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

int	ft_is_prime(int nb);

int	main(void)
{
	assert(1 == ft_is_prime(2));
	assert(1 == ft_is_prime(3));
	assert(0 == ft_is_prime(4));

	int primo;
	printf("digite um número: ");
	scanf("%d", &primo);
	printf("RESPOSTA: %d\n1 = é primo, 0 = não é primo.\n", ft_is_prime(primo));
	printf("\nQuer entender o que aconteceu aqui?\n");
	printf("Abra esse arquivo no cat ou no vim.\n");
	return (0);
}
