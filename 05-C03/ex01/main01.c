/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 00:22:54 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/17 01:17:18 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[15];
	char	s2[15];
	int		ret;

	strcpy(s1, "abcd");
	strcpy(s2, "ABCD");

	ret = ft_strncmp(s1, s2, 4);

	if (ret < 0)
	{
		printf("A string s1 é menor e não confere\n");
	}
	else if (ret > 0)
	{
		printf("A string s1 é menor e não confere\n");
	}
	else
	{
		printf("As strings conferem\n");
	}
	return (0);
}
