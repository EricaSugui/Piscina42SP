/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:24:02 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/16 14:07:27 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while ((src[i] != '\0') && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size);
}
