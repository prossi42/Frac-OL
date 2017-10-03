/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_multi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:20:16 by prossi            #+#    #+#             */
/*   Updated: 2017/09/18 14:20:19 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_color_ext_multi_sd(t_fs *fs, int x, int y, int i)
{
	if (fs->psy == 1)
	{
		if (fs->p == 1)
			mlx_pixel_put_to_image_multi(fs->multi, x, y, \
				fs->col.tab[fs->col.cyy][fs->col.cxx]);
		if (fs->p == 2)
			mlx_pixel_put_to_image_multisd(fs->multi, x, y, \
				fs->col.tab[fs->col.cyy][fs->col.cxx]);
		if (fs->p == 3)
			mlx_pixel_put_to_image_multitd(fs->multi, x, y, \
				fs->col.tab[fs->col.cyy][fs->col.cxx]);
	}
	else
	{
		if (fs->p == 1)
			mlx_pixel_put_to_image_multi(fs->multi, x, y, fs->col.tab[5][i]);
		if (fs->p == 2)
			mlx_pixel_put_to_image_multisd(fs->multi, x, y, fs->col.tab[5][i]);
		if (fs->p == 3)
			mlx_pixel_put_to_image_multitd(fs->multi, x, y, fs->col.tab[5][i]);
	}
}

void	ft_color_ext_multi(t_fs *fs, int x, int y, int i)
{
	if (fs->psy == 1)
	{
		fs->col.nike += 1;
		ft_color_ext_multi_sd(fs, x, y, i);
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
		ft_color_ext_multi_sd(fs, x, y, i);
}

void	ft_color_tricorn_multi_sd(t_fs *fs, int x, int y)
{
	if (fs->psy == 1)
	{
		if (fs->p == 1)
			mlx_pixel_put_to_image_multi(fs->multi, x, y, \
				fs->col.tab[fs->col.cy][fs->col.cx]);
		if (fs->p == 2)
			mlx_pixel_put_to_image_multisd(fs->multi, x, y, \
				fs->col.tab[fs->col.cy][fs->col.cx]);
		if (fs->p == 3)
			mlx_pixel_put_to_image_multitd(fs->multi, x, y, \
				fs->col.tab[fs->col.cy][fs->col.cx]);
	}
	else
	{
		if (fs->p == 1)
			mlx_pixel_put_to_image_multi(fs->multi, x, y, 0x000000);
		if (fs->p == 2)
			mlx_pixel_put_to_image_multisd(fs->multi, x, y, 0x000000);
		if (fs->p == 3)
			mlx_pixel_put_to_image_multitd(fs->multi, x, y, 0x000000);
	}
}

void	ft_color_tricorn_multi(t_fs *fs, int x, int y)
{
	if (fs->psy == 1)
	{
		fs->col.swoosh += 0.10;
		ft_color_tricorn_multi_sd(fs, x, y);
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
		ft_color_tricorn_multi_sd(fs, x, y);
}
