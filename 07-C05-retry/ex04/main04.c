/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:35:26 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/23 02:51:53 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* assert - valida se é verdadeiro.
 * Se a condição for verdadeira, ele passa o código sem alertas.
 * Se a condição for falsa, ele vai dar a mensagem de ABORT.
 * Divirta-se =^.^=
 *
 * int n - para quem prefere ver a validação printada na tela.
 *
 * LEMBRANDO: se seu arquivo não passar pela validação do Assert,
 * ele vai abortar e não vai printar nada. Sinto muito :(
 *******************************************************/

#include <assert.h>
#include <stdio.h>

int	ft_fibonacci(int index);
/* começando o meu main */
/* usando a condição assert para validação */
int	main(void)
{
	assert(0 == ft_fibonacci(0));
	assert(1 == ft_fibonacci(1));
	assert(1 == ft_fibonacci(2));
	assert(2 == ft_fibonacci(3));
	assert(3 == ft_fibonacci(4));
	assert(5 == ft_fibonacci(5));
	assert(8 == ft_fibonacci(6));
	assert(13 == ft_fibonacci(7));
	assert(21 == ft_fibonacci(8));
	assert(34 == ft_fibonacci(9));
	assert(55 == ft_fibonacci(10));
	assert(89 == ft_fibonacci(11));
/* começando validação printavel na tela usando printf */	
	int n;
	printf("Digite o tamanho da sequência: ");
	scanf("%d", &n);
	printf("%d\n", ft_fibonacci(n));
	printf("\nQuer entender o que aconteceu aqui?\n");
	printf("Abra esse arquivo no cat ou no vim.\n");
	return (0); 
}
