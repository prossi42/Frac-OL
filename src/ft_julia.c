/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:59:30 by prossi            #+#    #+#             */
/*   Updated: 2017/09/15 14:59:31 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	julia_move(t_fs *fs, int x, int y)
{
	fs->sd.zr = (((x - (fs->sd.mouse_x - fs->sd.center)) / fs->sd.zoom) + fs->sd.xmin);
	fs->sd.zi = (((y - (fs->sd.mouse_y - fs->sd.center)) / fs->sd.zoom) + fs->sd.ymin);
}

void 	ft_julia(t_fs *fs)
{
	int			x;
	int			y;
	int			i;
	double		tmp;

	x = 0;
	while (x < WINSIZE_X)
	{
		y = 0;
		while (y < WINSIZE_Y)
		{
			if (fs->sd.pause != 0)
				julia_move(fs, x, y);
			else
			{
				fs->sd.zr = (((x - fs->x) / fs->sd.zoom) + fs->sd.xmin);
				fs->sd.zi = (((y - fs->y) / fs->sd.zoom) + fs->sd.ymin);
			}
			i = 0;
			while (fs->sd.zr * fs->sd.zr + fs->sd.zi * fs->sd.zi < fs->sd.mere && i < fs->sd.itmax)
			{
				tmp = fs->sd.zr;
				fs->sd.zr = fs->sd.zr * fs->sd.zr - fs->sd.zi * fs->sd.zi + fs->sd.cr;
				fs->sd.zi = fs->sd.jf * fs->sd.zi * tmp + fs->sd.ci;
				i++;
			}
			if (i == fs->sd.itmax)
			{
				ft_color_tricorn(fs, x, y);
			}
			else
				ft_color_ext(fs, x, y, i);
			y++;
		}
		x++;
	}
}
