/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tricorn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:08:15 by prossi            #+#    #+#             */
/*   Updated: 2017/09/13 11:08:17 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_tricorn(t_fs *fs)
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
			fs->sd.cr = ((x / fs->sd.zoom) + fs->sd.xmin);
			fs->sd.ci = ((y / fs->sd.zoom) + fs->sd.ymin);
			fs->sd.zr = 0;
			fs->sd.zi = 0;
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
