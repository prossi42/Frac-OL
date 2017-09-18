/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mandel_multi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:13:49 by prossi            #+#    #+#             */
/*   Updated: 2017/09/18 14:13:51 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_mandel_multi(t_fs *fs)
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
			fs->multi.cr = ((x / fs->multi.zoom) + fs->multi.xmin);
			fs->multi.ci = ((y / fs->multi.zoom) + fs->multi.ymin);
			fs->multi.zr = 0;
			fs->multi.zi = 0;
			i = 0;
			while (fs->multi.zr * fs->multi.zr + fs->multi.zi * fs->multi.zi < fs->multi.mere && i < fs->multi.itmax)
			{
				tmp = fs->multi.zr;
				fs->multi.zr = fs->multi.zr * fs->multi.zr - fs->multi.zi * fs->multi.zi + fs->multi.cr;
				fs->multi.zi = fs->multi.jf * fs->multi.zi * tmp + fs->multi.ci;
				i++;
			}
			if (i == fs->multi.itmax)
			{
				ft_color_tricorn_multi(fs, x, y);
			}
			else
				ft_color_ext_multi(fs, x, y, i);
			y++;
		}
		x++;
	}
}
