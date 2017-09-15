/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 11:58:34 by prossi            #+#    #+#             */
/*   Updated: 2017/09/15 11:58:38 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void 	ft_color_ext(t_fs *fs, int x, int y, int i)
{
	if (fs->psy == 1)
	{
		fs->col.nike += 1;
		mlx_pixel_put_to_image(fs->sd, x, y, fs->col.tab[fs->col.cyy][fs->col.cxx]);
		if (fs->col.nike > 1000)
		{
			if (fs->col.cyy == 0)
				fs->col.cyy = 11;
			if (fs->col.cxx == 0)
			{
				fs->col.cyy--;
				fs->col.cxx = 17;
			}
			fs->col.cxx--;
			fs->col.nike = 0;
		}
	}
	else
		mlx_pixel_put_to_image(fs->sd, x, y, fs->col.tab[5][i]);
}

void 	ft_color_tricorn(t_fs *fs, int x, int y)
{
	if (fs->psy == 1)
	{
		fs->sd.slide = 0;
		fs->col.swoosh += 0.10;
		mlx_pixel_put_to_image(fs->sd, x, y, fs->col.tab[fs->col.cy][fs->col.cx]);
		// mlx_pixel_put_to_image(fs->sd, x, y, 0x333CC);
		if (fs->col.swoosh > 10)
		{
			if (fs->col.cy == 11)
				fs->col.cy = 0;
			if (fs->col.cx == 10)
			{
				fs->col.cy++;
				fs->col.cx = 0;
			}
			fs->col.cx++;
			fs->col.swoosh = 0;
		}
	}
	else
		mlx_pixel_put_to_image(fs->sd, x, y, 0x000000);
}
