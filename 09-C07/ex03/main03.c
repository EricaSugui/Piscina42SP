/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:36:09 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/17 18:14:57 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	printf("OIOI");
	char arr[4][22] =
	{ "array of c string",
	  "is fun to use",
	  "make sure to properly",
	  "tell the array size"
	};
	printf("%lu", sizeof(arr));
	char *point;
	point = &arr[4][22];
	char separe[] = ", ";
	printf("Final string: %s\n", ft_strjoin(4, &point, separe));
	return (0);
}

