/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movemap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 21:41:40 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:49:36 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_centremap(t_mapinfo *map)
{
	int	i;
	int	k;
	int	offset_x;
	int	offset_y;

	i = 0;
	offset_x = map->points[map->lines / 2][map->width / 2].x;
	offset_y = map->points[map->lines / 2][map->width / 2].z;
	while (i < map->lines)
	{
		k = 0;
		while (k < map->width)
		{
			map->points[i][k].x -= offset_x;
			map->points[i][k].x += WIN_X / 2;
			map->points[i][k].z -= offset_y;
			map->points[i][k].z += WIN_Y / 2;
			k++;
		}
		i++;
	}
}
