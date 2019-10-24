/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 01:36:56 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/17 01:45:49 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char	buffer[80];

	strcpy( buffer, "Hello " );
	ft_strcat( buffer, "World" );

	printf( "%s\n", buffer );

	return EXIT_SUCCESS;	
}
