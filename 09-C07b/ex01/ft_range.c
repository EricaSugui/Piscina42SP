/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:06:59 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/22 19:25:07 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int				*tab;
	unsigned int	range;
	unsigned int	i;

	if (min >= max)
		return (0);
	range = max - min;
	range += (min < 0) ? 1 : 0;
	tab = malloc(range * sizeof(int));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);

}

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
