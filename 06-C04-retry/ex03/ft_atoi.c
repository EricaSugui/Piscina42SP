/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:16:56 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/18 18:42:39 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_space(char c)
{
	return ((c == '\n' || c == '\t' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ') ? 1 : 0);
}

int		ft_atoi(char *str)
{
	int sign;
	int numbers;

	sign = 1;
	numbers = 0;
	while (ft_space(*str))
		str++;
	while (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? sign * -1 : sign * 1;
	while (*str >= '0' && *str <= '9')
		numbers = numbers * 10 + (*str++ - '0');
	return (numbers * sign);
}
