/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:20:58 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 16:24:20 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strchar(char *str, char to_find)
{
	int i;
	int j;

	i = 0;
	while (to_find == '\0')
		return (str);
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == to_find)
		{
			return (str + j);
			i++;
		}
		j++;
	}
	return (0);
}
