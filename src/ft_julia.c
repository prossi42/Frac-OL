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
	if (fs->sd.pause != 0)
	{
		fs->sd.zr = (((x - (fs->sd.mouse_x - fs->sd.center)) / fs->sd.zoom) \
		+ fs->sd.xmin);
		fs->sd.zi = (((y - (fs->sd.mouse_y - fs->sd.center)) / fs->sd.zoom) \
		+ fs->sd.ymin);
	}
	else
	{
		fs->sd.zr = ((x / fs->sd.zoom) + fs->sd.xmin);
		fs->sd.zi = ((y / fs->sd.zoom) + fs->sd.ymin);
	}
}

void	ft_julia(t_fs *fs)
{
	int			i;

	while (++fs->sd.x < WINSIZE_X)
	{
		fs->sd.y = -1;
		while (++fs->sd.y < WINSIZE_Y)
		{
			julia_move(fs, fs->sd.x, fs->sd.y);
			i = 0;
			while (fs->sd.zr * fs->sd.zr + fs->sd.zi * fs->sd.zi < fs->sd.mere \
				&& i < fs->sd.itmax)
			{
				fs->sd.tmp = fs->sd.zr;
				fs->sd.zr = fs->sd.zr * fs->sd.zr - fs->sd.zi * fs->sd.zi + \
				fs->sd.cr;
				fs->sd.zi = fs->sd.jf * fs->sd.zi * fs->sd.tmp + fs->sd.ci;
				i++;
			}
			if (i == fs->sd.itmax)
				ft_color_tricorn(fs, fs->sd.x, fs->sd.y);
			else
				ft_color_ext(fs, fs->sd.x, fs->sd.y, i);
		}
	}
	fs->sd.x = -1;
}
