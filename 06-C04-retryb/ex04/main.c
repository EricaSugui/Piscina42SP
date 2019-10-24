/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 00:41:14 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/15 00:53:28 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	int		nbr = 0;
	char	*a = malloc(50 * sizeof(char));

	printf("Type your number: ");
	scanf("%d", &nbr);
	
	printf("\nBase to convert to: ");
	scanf("%s", a);

	ft_putnbr_base(nbr, a);
	return 0;
}
