/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:10:10 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/16 18:11:45 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	ft_alpha(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		if (c < '0' || c > '9')
			return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	if (str[i] != '\0')
		str[i] = ft_upcase(str[i]);
	while (str[++i] != '\0')
	{
		if (!ft_alpha(str[i - 1]) && ft_alpha(str[i]))
			str[i] = ft_upcase(str[i]);
		else
			str[i] = ft_lowcase(str[i]);
	}
	return (str);
}
