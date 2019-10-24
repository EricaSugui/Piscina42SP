/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:37:59 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/22 18:53:35 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strdup(char *src);

int main ()
{
  char *str= "hewwo";
  char *copy;

  copy = ft_strdup(str);
  printf("%s", copy);
  return 0;
}
