/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 21:59:20 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/23 15:25:18 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	len = 0;
	while (src[len] != '\0')
		len++;
	copy = malloc((len + 1) * sizeof(char));
	len = 0;
	while (src[len] != '\0')
	{
		copy[len] = src[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}
