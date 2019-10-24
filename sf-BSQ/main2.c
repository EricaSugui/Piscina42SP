int		determine_row_and_col_count(void)
{
	int		i;
	int		col_count;

	i = 0;
	while (i < g_map_dims[2] - 3)
	{
		if (g_input[i] < '0' || g_input[i] > '9')
			return (FALSE);
		i++;
	}
	if (i == 0)
		return (FALSE);
	col_count = 0;
	i = g_map_dims[2];
	while (g_input[++i] != '\n' && g_input[i] != '\0')
		col_count++;
	g_map_dims[0] = ft_atoi(g_input);
	g_map_dims[1] = col_count;
	if (g_map_dims[0] == 0 || g_map_dims[1] == 0)
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
