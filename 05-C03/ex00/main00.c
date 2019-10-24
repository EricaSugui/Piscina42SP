/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:57:33 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/17 00:31:42 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/* como usar:
 * em strcpy s1 e s2, colocar valores iguais, tem que validar igual.
 * se strcpy s1 tiver letras minusculas e s2 tiver maiusculas, vai validar dizendo que s2 é menor que s1.
 * se strcpy s1 tiver letras maiúsculas e s2 tiver minúsculas, vai validar dizendo que s1 é menor que s2.
 * bom proveito! Erica bot.
 */
int	ft_strcmp(char *s1, char*s2);

int	main(void)
{
	char s1[15];
	char s2[15];
	int	ret;

	strcpy(s1, "ABCD");
	strcpy(s2, "ABCD");
	ret = ft_strcmp(s1, s2);

	if (ret < 0)
	{
		printf("A string s1 é menor e não confere\n");
	}
	else if (ret > 0)
	{
		printf("A string s2 é menor e não confere\n");
	}
	else
	{
		printf("As strings conferem");
	}
	return (0);
}
