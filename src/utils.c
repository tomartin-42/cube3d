/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:36:54 by tomartin          #+#    #+#             */
/*   Updated: 2021/12/14 08:10:41 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"
#include "paint.h"

void	print_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		printf("%s\n", map[i++]);
}

void	print_struc_mapi(t_map *mapi)
{
	int	i;

	i = 0;
	printf("NO rute: %s\n", mapi->NO_rute);
	printf("SO rute: %s\n", mapi->SO_rute);
	printf("WE rute: %s\n", mapi->WE_rute);
	printf("EA rute: %s\n", mapi->EA_rute);
	printf("F: %ld, %ld, %ld\n", mapi->f_color[0],
		mapi->f_color[1], mapi->f_color[2]);
	printf("C: %ld, %ld, %ld\n", mapi->c_color[0],
		mapi->c_color[1], mapi->c_color[2]);
	printf("==========MAP==============\n");
	while (mapi->map[i])
	{
		printf("%s\n", mapi->map[i]);
		i++;
	}
}

void	print_player(t_player *player)
{
	printf("position: %f - %f\n", player->p_ply.o.x, player->p_ply.o.y);
	printf("v_dir: %f - %f\n", player->dir_ply.o.x, player->dir_ply.o.y);
	printf("camara_v: %f - %f\n", player->camera.o.x, player->camera.o.y);
}
