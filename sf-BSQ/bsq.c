/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:00:54 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/23 22:39:00 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <time.h>
#include <stdio.h>

//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}
//
//void	ft_putstr(char *str)
//{
//	int counter;
//
//	counter = 0;
//	while (str[counter] != '\0')
//	{
//		ft_putchar(str[counter]);
//		counter++;
//	}
//}
//validação de erros
int		main(int argc, char **argv)
{
	int			i;

	i = -1;
//	i = 1;
//	if (i < argc)
	if (argc < 2)
	{
//		ft_putstr(argv[i]);
//		i++;
		write(1, &"\n", 1);
		return (1);
	}

	while (++i < argc)
//	if (++i < argc)
	{
//		clock_t		begin = clock();
		if ((g_map = (t_map_b**)malloc(sizeof(t_map_b*))) == FALSE) // ()verifica se e possivel alocar memoria dinamica para o mapa
		{
			write(2, "map error\n", 10);
			g_map_malloc_error = TRUE;
		}
		else if ((g_input = (char*)malloc(sizeof(char))) == FALSE)// verifica se e possivel alocar memoria dinamica para input
		{
			g_input_malloc_error = TRUE;
			write(2, "map error\n", 10);
		}
		else if (handle_input(&i, argc, argv) == FALSE || solve_map() == FALSE) // verifica se existem dois parametros e se o mapa tem solução
			write(2, "map error\n", 10);
//		else// verifica se vai time out
//		{			
//			clock_t preprint = clock();
//			printf("map %d: before print: %f\n", i, (double)(preprint - begin) / CLOCKS_PER_SEC );
//			print_map();
//			clock_t end = clock();
//			printf("map %d: since print: %f\n", i, (double)(end - preprint) / CLOCKS_PER_SEC );
//			printf("map %d: map total: %f\n\n", i, (double)(end - begin) / CLOCKS_PER_SEC );
//		}
//		else if ((i == 1) && (i < argc))
//		{
//			printf("digitar o mapa: %s\n", argv[i]);
//			i++;
//		}
		free_all();// desaloca a memoria alocada
	}
//	i = 1;
//	while (i< argc)
//	else if ((i < argc) && i == 1)
//	{
//		printf("digitar o mapa: %s\n", argv[i]);
//		i++;
//	}
	return (0);
}

int		read_file_to_char_array(char *file)
{
	int		fd;
	int		reader;
	char	buffer[BUFF_SIZE + 1];

	g_input[0] = '\0';
	if (file != 0)
	{
		if ((fd = open(file, O_RDONLY)) == -1) 
			return (FALSE);
	}
	else
		fd = 0;
	while ((reader = read(fd, buffer, BUFF_SIZE)))
	{
		if (reader == -1)
			return (FALSE);
		buffer[reader] = '\0';
		if (ft_strcat_to_g_input(buffer) == FALSE)
			return (FALSE);
	}
	if (close(fd) == -1) 
		return (FALSE);
	return (TRUE);
}

int		ft_strcat_to_g_input(char *s) // a função transfere os dados do array BUFF_SIZE para string e libera a memoria alocada para o array
{
	int		i;
	int		s_len;
	char	*result;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if ((result = (char*)malloc(sizeof(char) * (g_input_len + s_len + 1))) == 0)
		return (FALSE);
	i = -1;
	while (++i < g_input_len)
		result[i] = g_input[i];
	i = -1;
	while (++i < s_len)
		result[g_input_len + i] = s[i];
	result[g_input_len + s_len] = '\0';
	g_input_len += s_len;
	free(g_input);
	g_input = result;
	return (TRUE);
}

int		handle_input(int *i, int argc, char **argv)
{
	int z;

	z = 1;
	if (*i == 0 && argc == 1) /* acho que é aqui o stdin, mudar para argc == 2 */
	{
		if (set_up_legend_and_map(0) == FALSE)
			return (FALSE);
	}
	else if (*i == 0 && argc != 1)
	{
		if (set_up_legend_and_map(argv[++(*i)]) == FALSE)
			return (FALSE);
	}
	else 
	{
//		write(1, "\n", 1);
			return (FALSE);
	}
	return (TRUE);
}

void	print_map(void)
{
	int		i;
	int		j;
	int		size;
	char	*output;

	size = g_map_dims[0] * (g_map_dims[1] + 1);
	i = 0;
	output = (char*)malloc(sizeof(char) * (size + 1));
	while (i < g_map_dims[0])
	{
		j = 0;
		while (j < g_map_dims[1])
		{
			output[(i * (g_map_dims[1] + 1)) + j] = g_map[i][j].lett;
			j++;
		}
		output[i * (g_map_dims[1] + 1) + g_map_dims[1]] = '\n';
		i++;
	}
	output[size] = '\0';
	write(1, output, size);
	free(output);
}

int		set_up_legend_and_map(char *file)// essa função e foda
{
	int		legend_offset;

	if (read_file_to_char_array(file) == -1) // tenta abrir o arquivo, caso não consiga retorna false
		return (FALSE);
	legend_offset = 0;
	while (g_input[legend_offset] != '\n' && g_input[legend_offset] != '\0')// verifica todas as linhas ate o final
		legend_offset++;
	if (g_input[legend_offset] == '\0')// se a linha terminar com \0 retorna false
		return (FALSE);
	g_legend[0] = g_input[legend_offset - 3];//
	g_legend[1] = g_input[legend_offset - 2];//verifica as linhas de tras para frente
	g_legend[2] = g_input[legend_offset - 1];//
	g_map_dims[2] = legend_offset;
	if (determine_row_and_col_count() == FALSE)// verifica as linhas e colunas, se não reotorna false
		return (FALSE);
	if (g_input[g_map_dims[2] + g_map_dims[0] * (g_map_dims[1] + 1)] != '\n')// verifica se o arquivo esta correto 
		g_map_malloc_error = TRUE;
	if (g_input[g_map_dims[2] + g_map_dims[0] * (g_map_dims[1] + 1)] != '\n')// verifica se o arquivo esta correto ou seja todas as linhas e colunas do mesmo tamanho 
		return (FALSE);
	if (fill_map() == FALSE)// verifica se e possivel completar
		return (FALSE);
	return (TRUE);
}

int		determine_row_and_col_count(void)
{
	int		i;
	int		col_count;

	i = 0;
	while (i < g_map_dims[2] - 3)
	{
		if (g_input[i] < '0' || g_input[i] > '9')// validação para ver se as culunas e linhas são numeros
			return (FALSE);
		i++;
	}
	if (i == 0)
		return (FALSE);
	col_count = 0;
	i = g_map_dims[2];
	while (g_input[++i] != '\n' && g_input[i] != '\0')
		col_count++;
	g_map_dims[0] = ft_atoi(g_input);// atoi tranforma o arquivo em numeros
	g_map_dims[1] = col_count;
	if (g_map_dims[0] == 0 || g_map_dims[1] == 0)// se a dimensão for icgual a 0x0 da erro
	{
		g_map_malloc_error = TRUE;
		return (FALSE);
	}
	return (TRUE);
}

int		fill_map(void)
{
	int		i;
	int		j;

	i = 0;
	free(g_map);
	if ((g_map = (t_map_b**)malloc(sizeof(t_map_b*) * g_map_dims[0])) == 0)
		return (FALSE);
	while (i < g_map_dims[0])
	{
		if (g_input[g_map_dims[2] + i * (g_map_dims[1] + 1)] != '\n')
			return (FALSE);
		if ((g_map[i] = (t_map_b*)malloc(sizeof(t_map_b) * g_map_dims[1])) == 0)
			return (FALSE);
		j = 0;
		while (j < g_map_dims[1])
		{
			g_map[i][j].lett = g_input[(g_map_dims[2] + 1) +
										i * (g_map_dims[1] + 1) + j];
			j++;
		}
		i++;
	}
	if (g_input[g_map_dims[2] + 1 + i * (g_map_dims[1] + 1)] != '\0')
		return (FALSE);
	return (TRUE);
}

int		solve_map(void)
{
	int		i;
	int		j;

	i = -1;
	while (++i < g_map_dims[0])
	{
		j = -1;
		while (++j < g_map_dims[1])
			if (determine_number(i, j) == FALSE)
				return (FALSE);
	}
	update_map();
	return (TRUE);
}

int		determine_number(int i, int j)
{
	if (g_map[i][j].lett == g_legend[1])
		g_map[i][j].numb = 0;
	else if (g_map[i][j].lett != g_legend[0])
		return (FALSE);
	else if (i == 0 || j == 0)
		g_map[i][j].numb = 1;
	else
		g_map[i][j].numb = (min_of_top_left_topleft(i, j) + 1);
	if (g_map[i][j].numb > g_max_coords[2])
	{
		g_max_coords[0] = i;
		g_max_coords[1] = j;
		g_max_coords[2] = g_map[i][j].numb;
	}
	return (TRUE);
}

int		min_of_top_left_topleft(int i, int j)
{
	if (g_map[i - 1][j].numb <= g_map[i - 1][j - 1].numb &&
		g_map[i - 1][j].numb <= g_map[i][j - 1].numb)
		return (g_map[i - 1][j].numb);
	else if (g_map[i][j - 1].numb <= g_map[i - 1][j - 1].numb &&
				g_map[i][j - 1].numb <= g_map[i - 1][j].numb)
		return (g_map[i][j - 1].numb);
	else
		return (g_map[i - 1][j - 1].numb);
}

void	update_map(void)
{
	int		i;
	int		j;

	i = g_max_coords[0] - g_max_coords[2];
	while (++i <= g_max_coords[0])
	{
		j = g_max_coords[1] - g_max_coords[2];
		while (++j <= g_max_coords[1])
			g_map[i][j].lett = g_legend[2];
	}
}

int		ft_atoi(char *str)
{
	int						i;
	unsigned long long		x;
	int						negative;

	i = 0;
	negative = 1;
	x = 0;
	while (SPACE(str[i]))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		negative = str[i] == '-' ? -1 : 1;
		str++;
	}
	while (*str == '0')
		str++;
	while (str[i] != '\0' && i != g_map_dims[2] - 3)
	{
		if (i > 19 || x > 9223372036854775807ULL)
			return (negative == 1 ? -1 : 0);
		if (str[i] > '9' || str[i] < '0')
			return (negative * x);
		x = x * 10 + str[i++] - '0';
	}
	return (negative * x);
}

void	free_all(void)
{
	int i;

	if (g_map_malloc_error == FALSE)
	{
		i = 0;
		while (i < g_map_dims[0])
			free(g_map[i++]);
		free(g_map);
	}
	if (g_input_malloc_error == FALSE)
		free(g_input);
	g_input_len = 0;
	g_map_dims[0] = 0;
	g_map_dims[1] = 0;
	g_map_dims[2] = 0;
	g_legend[0] = 0;
	g_legend[1] = 0;
	g_legend[2] = 0;
	g_max_coords[0] = 0;
	g_max_coords[1] = 0;
	g_max_coords[2] = 0;
	g_map_malloc_error = FALSE;
	g_input_malloc_error = FALSE;
}
