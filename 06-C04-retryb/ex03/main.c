/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:56:50 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/14 21:09:09 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char *c = malloc(50 * sizeof(char));
	
	printf("Type the string to read:\n");
	scanf("%s", c);
	printf("%d", ft_atoi(c));
}
