/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:28:09 by esuguimo          #+#    #+#             */
/*   Updated: 2019/10/23 11:28:25 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

# define SPACE(x) (x=='\t'||x=='\n'||x=='\v'||x=='\f'||x=='\r'||x==' ')
# define TRUE 1
# define FALSE 0
# define BUFF_SIZE 4096

typedef struct	s_map_b
{
	char		lett;
	int			numb;
}				t_map_b;

int				handle_input(int *i, int argc, char **argv);
int				set_up_legend_and_map(char *file);
int				read_file_to_char_array(char *file);
int				ft_strcat_to_g_input(char *s);
int				set_legend_and_map_dims(void);
int				determine_row_and_col_count(void);
int				fill_map (void);
int				ft_atoi(char *str);
int				solve_map(void);
int				determine_number(int i, int j);
int				min_of_top_left_topleft(int i, int j);
void			update_map(void);
void			print_map(void);
void			free_all(void);

t_map_b			**g_map;
char			*g_input;
int				g_input_len;
int				g_map_dims[3];
char			g_legend[3];
int				g_max_coords[3];
int				g_map_malloc_error;
int				g_input_malloc_error;

#endif
