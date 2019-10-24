/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptanasov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:20:20 by ptanasov          #+#    #+#             */
/*   Updated: 2019/10/13 15:00:30 by ptanasov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	ft_putchar(char c);

int		ft_putstr(char *str);

int		ft_validation(int arg1, char *arg2, int i);

int		ft_error(void);

int		ft_validation2(char *arg2, int i);

char	**ft_puttab(char **tab);

void	ft_createheader(char *argv);

void	ft_putheader(char **header);

void	ft_prttab(char **tab);

void	ft_sorttab(char **tab);

#endif
