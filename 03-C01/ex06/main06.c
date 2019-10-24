/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:30:30 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/07 21:34:03 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str); 


int main(void)
{
	char *str;
	int n;
	str = "Teste de Tamanho de Texto";
	n = ft_strlen(str);
	printf("Tamanho  = %d", n);
}
