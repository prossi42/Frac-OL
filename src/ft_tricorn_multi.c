/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tricorn_multi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:36:14 by prossi            #+#    #+#             */
/*   Updated: 2017/09/18 14:36:15 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_tricorn_multi_td(t_fs *fs)
{
	fs->multi.tmp = fs->multi.zr;
	fs->multi.zr = fs->multi.zr * fs->multi.zr - fs->multi.zi * \
	fs->multi.zi + fs->multi.cr;
	fs->multi.zi = fs->multi.jf * fs->multi.zi * fs->multi.tmp + \
	fs->multi.ci;
}

void	ft_tricorn_multi_sd(t_fs *fs, int x, int y)
{
	fs->multi.cr = ((x / fs->multi.zoom) + fs->multi.xmin);
	fs->multi.ci = ((y / fs->multi.zoom) + fs->multi.ymin);
	fs->multi.zr = 0;
	fs->multi.zi = 0;
}

void	ft_tricorn_multi(t_fs *fs)
{
	int			i;

	while (++fs->multi.x < WINSIZE_X)
	{
		fs->multi.y = -1;
		while (++fs->multi.y < WINSIZE_Y)
		{
			ft_tricorn_multi_sd(fs, fs->multi.x, fs->multi.y);
			i = 0;
			while (fs->multi.zr * fs->multi.zr + fs->multi.zi * fs->multi.zi \
				< fs->multi.mere && i < fs->multi.itmax)
			{
				ft_tricorn_multi_td(fs);
				i++;
			}
			if (i == fs->multi.itmax)
				ft_color_tricorn_multi(fs, fs->multi.x, fs->multi.y);
			else
				ft_color_ext_multi(fs, fs->multi.x, fs->multi.y, i);
		}
	}
	fs->multi.x = -1;
}
