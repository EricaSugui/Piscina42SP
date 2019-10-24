/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:01:41 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/17 14:40:44 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int   main(void)
{
	int* res;
	int i;

	res = ft_range(5, 10);
	i = 0;
	while (i < 5)
	{
		printf("%d, ", res[i]);
		i++;
	}
	printf("\n");
	res = ft_range(-20, -15);
	i = 0;
	while (i < 5)
	{
		printf("%d, ", res[i]);
		i++;
	}
	printf("\n");
	res = ft_range(-2147483648, -2147483646);
	i = 0;
	while (i < 2)
	{
		printf("%d, ", res[i]);
		i++;
	}
	printf("\n");
	res = ft_range(10, 5);
	printf("%x\n", (unsigned int)res);
	return (0);
}
