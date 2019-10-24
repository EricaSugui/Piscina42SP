/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 01:57:23 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/17 13:52:37 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char buffer[80];

int		main(void)
{
	ft_strcpy( buffer, "Hello " );
	ft_strncat( buffer, "World", 8 );
	printf("%s\n", buffer);
	ft_strncat(buffer, "*************", 4);
	printf("%s\n", buffer);
	return (0);
}
