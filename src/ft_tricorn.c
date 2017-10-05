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

void	ft_tricorn_td(t_fs *fs)
{
	fs->sd.tmp = fs->sd.zr;
	fs->sd.zr = fs->sd.zr * fs->sd.zr - fs->sd.zi * fs->sd.zi + \
	fs->sd.cr;
	fs->sd.zi = fs->sd.jf * fs->sd.zi * fs->sd.tmp + fs->sd.ci;
}

void	ft_tricorn_sd(t_fs *fs, int x, int y)
{
	fs->sd.cr = ((x / fs->sd.zoom) + fs->sd.xmin);
	fs->sd.ci = ((y / fs->sd.zoom) + fs->sd.ymin);
	fs->sd.zr = 0;
	fs->sd.zi = 0;
}

void	ft_tricorn(t_fs *fs)
{
	int			i;

	while (++fs->sd.x < WINSIZE_X)
	{
		fs->sd.y = -1;
		while (++fs->sd.y < WINSIZE_Y)
		{
			ft_tricorn_sd(fs, fs->sd.x, fs->sd.y);
			i = 0;
			while (fs->sd.zr * fs->sd.zr + fs->sd.zi * fs->sd.zi < fs->sd.mere \
				&& i < fs->sd.itmax)
			{
				ft_tricorn_td(fs);
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
