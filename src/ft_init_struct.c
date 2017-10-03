/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 22:14:34 by prossi            #+#    #+#             */
/*   Updated: 2017/09/07 13:55:05 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_init_struct_td(t_fs *fs)
{
	fs->sd.cr = 0.285;
	fs->sd.ci = 0.01;
	fs->sd.xmin = -2;
	fs->sd.xmax = 1;
	fs->sd.ymin = -2;
	fs->sd.ymax = 1.2;
	fs->sd.itmax = 150;
	fs->sd.zoom = 150;
	fs->col.cx = 0;
	fs->col.cxx = 17;
	fs->col.cy = 0;
	fs->col.cyy = 11;
	fs->col.swoosh = 0;
	fs->col.nike = 0;
	fs->sd.bpp = 4;
	fs->sd.mere = 4;
	fs->sd.jf = 2;
	fs->psy = 0;
	fs->sd.mouse_x = 0;
	fs->sd.mouse_y = 0;
	fs->sd.pause = 0;
	fs->sd.center = 300;
	fs->sd.var = 0;
	fs->sd.x = -1;
}

void	ft_init_struct_sd(t_fs *fs, int option)
{
	fs->sd.xmin = -2;
	fs->sd.xmax = 0.6;
	fs->sd.ymin = -2;
	fs->sd.ymax = 1.2;
	fs->sd.itmax = 50;
	fs->sd.zoom = 150;
	fs->col.cx = 0;
	fs->col.cxx = 17;
	fs->col.cy = 0;
	fs->col.cyy = 11;
	fs->col.swoosh = 0;
	fs->col.nike = 0;
	fs->sd.bpp = 4;
	fs->sd.mere = 4;
	fs->sd.jf = -2;
	fs->psy = 0;
	fs->sd.mouse_x = 0;
	fs->sd.mouse_y = 0;
	fs->sd.x = -1;
	if (option == 2)
		ft_init_struct_td(fs);
}

void	ft_init_struct(t_fs *fs, int option)
{
	if (option == 0)
	{
		fs->sd.xmin = -2;
		fs->sd.xmax = 0.6;
		fs->sd.ymin = -2;
		fs->sd.ymax = 1.2;
		fs->sd.itmax = 50;
		fs->sd.zoom = 150;
		fs->col.cx = 0;
		fs->col.cxx = 17;
		fs->col.cy = 0;
		fs->col.cyy = 11;
		fs->col.swoosh = 0;
		fs->col.nike = 0;
		fs->sd.bpp = 4;
		fs->sd.mere = 4;
		fs->sd.jf = 2;
		fs->psy = 0;
		fs->sd.mouse_x = 0;
		fs->sd.mouse_y = 0;
		fs->sd.x = -1;
	}
	if (option == 1 || option == 2)
		ft_init_struct_sd(fs, option);
}
