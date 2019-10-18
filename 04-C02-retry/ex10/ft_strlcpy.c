/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:25:52 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/16 18:25:56 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (*(str + ++i))
		;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	if (size == 0)
		return (ft_strlen(src));
	len = 0;
	while (size > 1 && *src)
	{
		*dest = *src;
		++dest;
		++src;
		--size;
		++len;
	}
	*dest = 0;
	while (*dest || *src)
		if (*src)
		{
			++src;
			++len;
		}
	return (len);
}
