/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:00:56 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/22 15:20:21 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int main()
{
	int i, n, b, a, l, f, k;

	i = 16;
	n = 3;
	b = 5;
	a = 9;
	l = -1;
	f = 0;
	k = 17;
	printf("is %d prime? %d\n", i, ft_find_next_prime(i));
	printf("is %d prime? %d\n", n, ft_find_next_prime(n));
	printf("is %d prime? %d\n", b, ft_find_next_prime(b));
	printf("is %d prime? %d\n", a, ft_find_next_prime(a));
	printf("is %d prime? %d\n", l, ft_find_next_prime(l));
	printf("is %d prime? %d\n", f, ft_find_next_prime(f));
	printf("is %d prime? %d\n", k, ft_find_next_prime(k));
}
