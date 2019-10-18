/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 00:49:36 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/15 01:04:13 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int store;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			store = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = store;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
