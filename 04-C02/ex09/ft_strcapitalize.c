/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:10:41 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/15 19:19:43 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int j;

	i = 0;
	ft_strlowcase(str);
	if ((str[i] != '\0') && (str[i] >= 'a') && str[i] <= 'z')
	{
		str[i] += -32;
		++i;
	}
	j = i - 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			if ((str[j] >= 32) && (str[j] <= 47))
				str[i] += -32;
		i++;
		j++;
	}
	return (0);
}
