/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:46:54 by exam              #+#    #+#             */
/*   Updated: 2019/10/25 17:59:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	first_word(char *str)
{
	int cont;
	cont = 0;

	while(str[cont] == ' ')
	{
		++str;
	}
	while (str[cont] != '\0')
	{
		ft_putchar(str[cont]);
		str++;
		if (str[cont] == ' ')
			break;
	}
}

int		main(int argc, char *argv[])
{
	while (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	if (argc <= 2)
	{
		first_word(argv[1]);
		ft_putchar('\n');
	}
	if (argc >2)
	{
		ft_putchar('\n');
	}
	return (0);
}
