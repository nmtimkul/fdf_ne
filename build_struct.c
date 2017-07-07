/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 19:47:34 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 10:12:09 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		count_numbers(char *str)
{
	long int	k;
	long int	num;

	k = 0;
	num = 0;
	while (str[k] != '\0')
	{
		if (ft_isdigit(str[k]))
		{
			num++;
			while ((ft_isdigit(str[k]) && str[k]) || CON_ONE)
				k++;
		}
		else
			k++;
	}
	return (num);
}

void			ft_map(t_mapinfo *map, t_point ***cloud)
{
	long int	k;
	long int	l;
	char		**split_line;
	t_point		**new;

	k = 0;
	map->width = count_numbers(map->map[k]);
	new = (t_point**)malloc(sizeof(t_point*) * map->lines);
	while (k < map->lines)
	{
		new[k] = (t_point*)malloc(sizeof(t_point) * map->width);
		l = 0;
		split_line = ft_strsplit(map->map[k], ' ');
		while (l < map->width)
		{
			new[k][l] = new_point(l, ft_atoi(split_line[l]), k);
			l++;
		}
		free(split_line);
		k++;
	}
	*cloud = new;
}

t_point			**ft_mapcopy(t_mapinfo *map)
{
	long int	k;
	long int	l;
	t_point		**new;

	k = 0;
	new = (t_point**)malloc(sizeof(t_point*) * map->lines);
	while (k < map->lines)
	{
		new[k] = (t_point*)malloc(sizeof(t_point) * map->width);
		l = 0;
		while (l < map->width)
		{
			new[k][l] = map->points[k][l];
			l++;
		}
		k++;
	}
	return (new);
}

void			free_map(t_mapinfo map)
{
	long int	k;

	k = -1;
	while (++k < map.lines)
		free(map.points[k]);
	free(map.points);
	map.points = NULL;
}
