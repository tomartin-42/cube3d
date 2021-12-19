/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <tomartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:31:52 by tomartin          #+#    #+#             */
/*   Updated: 2021/12/18 13:43:31 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paint.h"
#include "keys.h"

void	rotate_r(t_win *win)
{
	double	x1;
	double	y1;

	if (win->keys->r_r == true)
	{
		x1 = (cos(-ALFA) * win->ply->dir_ply.o.x)
			- (sin(-ALFA) * win->ply->dir_ply.o.y);
		y1 = (sin(-ALFA) * win->ply->dir_ply.o.x)
			+ (cos(-ALFA) * win->ply->dir_ply.o.y);
		load_values_v(&win->ply->dir_ply, x1, y1);
		x1 = (cos(-ALFA) * win->ply->camera.o.x)
			- (sin(-ALFA) * win->ply->camera.o.y);
		y1 = (sin(-ALFA) * win->ply->camera.o.x)
			+ (cos(-ALFA) * win->ply->camera.o.y);
		load_values_v(&win->ply->camera, x1, y1);
	}
}

void	rotate_l(t_win *win)
{
	double	x1;
	double	y1;

	if (win->keys->r_l == true)
	{
		x1 = (cos(ALFA) * win->ply->dir_ply.o.x)
			- (sin(ALFA) * win->ply->dir_ply.o.y);
		y1 = (sin(ALFA) * win->ply->dir_ply.o.x)
			+ (cos(ALFA) * win->ply->dir_ply.o.y);
		load_values_v(&win->ply->dir_ply, x1, y1);
		x1 = (cos(ALFA) * win->ply->camera.o.x)
			- (sin(ALFA) * win->ply->camera.o.y);
		y1 = (sin(ALFA) * win->ply->camera.o.x)
			+ (cos(ALFA) * win->ply->camera.o.y);
		load_values_v(&win->ply->camera, x1, y1);
	}
}

void	move_f_b(t_win *win)
{
	if (win->keys->m_f == true)
	{
		if (win->mapi->map[(int)(win->ply->p_ply.o.x
				+ win->ply->dir_ply.o.x * STEP)]
				[(int)(win->ply->p_ply.o.y)] != '1')
			win->ply->p_ply.o.x += win->ply->dir_ply.o.x * STEP;
		if (win->mapi->map[(int)(win->ply->p_ply.o.x)]
			[(int)(win->ply->p_ply.o.y + win->ply->dir_ply.o.y * STEP)] != '1')
			win->ply->p_ply.o.y += win->ply->dir_ply.o.y * STEP;
	}
	if (win->keys->m_b == true)
	{
		if (win->mapi->map[(int)(win->ply->p_ply.o.x
				- win->ply->dir_ply.o.x * STEP)]
				[(int)(win->ply->p_ply.o.y)] != '1')
			win->ply->p_ply.o.x -= win->ply->dir_ply.o.x * STEP;
		if (win->mapi->map[(int)(win->ply->p_ply.o.x)]
			[(int)(win->ply->p_ply.o.y - win->ply->dir_ply.o.y * STEP)] != '1')
			win->ply->p_ply.o.y -= win->ply->dir_ply.o.y * STEP;
	}
}

void	move_r_l(t_win *win)
{
	if (win->keys->m_r == true)
	{
		if (win->mapi->map[(int)(win->ply->p_ply.o.x
				+ win->ply->dir_ply.o.y * STEP)]
				[(int)(win->ply->p_ply.o.y)] != '1')
			win->ply->p_ply.o.x += win->ply->dir_ply.o.y * STEP;
		if (win->mapi->map[(int)(win->ply->p_ply.o.x)]
			[(int)(win->ply->p_ply.o.y - win->ply->dir_ply.o.x * STEP)] != '1')
			win->ply->p_ply.o.y -= win->ply->dir_ply.o.x * STEP;
	}
	if (win->keys->m_l == true)
	{
		if (win->mapi->map[(int)(win->ply->p_ply.o.x
				- win->ply->dir_ply.o.y * STEP)]
				[(int)(win->ply->p_ply.o.y)] != '1')
			win->ply->p_ply.o.x -= win->ply->dir_ply.o.y * STEP;
		if (win->mapi->map[(int)(win->ply->p_ply.o.x)]
			[(int)(win->ply->p_ply.o.y + win->ply->dir_ply.o.x * STEP)] != '1')
			win->ply->p_ply.o.y += win->ply->dir_ply.o.x * STEP;
	}
}
