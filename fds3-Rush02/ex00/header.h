/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:36:35 by dlima-ra          #+#    #+#             */
/*   Updated: 2019/10/20 23:32:48 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int		ft_nbrlen(int n);
int		ft_strlen(char *str);
void	ft_putchar(char *w);
void	ft_unity(char *c, char *dic);
int		ft_unityf(char c, char *dic);
int		ft_unityot(char c, char *dic);
int		ft_ten(char *c, char *dic);
int		ft_tenot(char *c, char *dic);
void	ft_tenplus(char *c, char *dic);
void	ft_hundred(char *c, char *dic);
void	ft_thousand(char *c, char *dic, int size);
void	search(char *c, char *dic);
char	*ft_itoa(int n);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strchar(char *str, char to_find);
char	*size_th(char *c, int size);
void	charge(char *c, char *dic, char *x, int size);
char	*plus(char *c, int size);
#endif
