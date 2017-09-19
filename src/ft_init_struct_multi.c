/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct_multi.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:47:22 by prossi            #+#    #+#             */
/*   Updated: 2017/09/18 14:47:23 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_init_struct_multi(t_fs *fs, int option)
{
	if (option == 0)
	{
		fs->multi.xmin = -2;
		fs->multi.xmax = 0.6;
 		fs->multi.ymin = -2;
		fs->multi.ymax = 1.2;
		fs->multi.itmax = 50;
		fs->multi.zoom = 150;
		fs->col.cx = 0;
		fs->col.cxx = 17;
		fs->col.cy = 0;
		fs->col.cyy = 11;
		fs->col.swoosh = 0;
		fs->col.nike = 0;
		fs->multi.bpp = 4;
		fs->multi.mere = 4;
		fs->multi.jf = 2;
	}
	if (option == 1)
	{
		fs->multi.xmin = -2;
		fs->multi.xmax = 0.6;
 		fs->multi.ymin = -2;
		fs->multi.ymax = 1.2;
		fs->multi.itmax = 50;
		fs->multi.zoom = 150;
		fs->col.cx = 0;
		fs->col.cxx = 17;
		fs->col.cy = 0;
		fs->col.cyy = 11;
		fs->col.swoosh = 0;
		fs->col.nike = 0;
		fs->multi.bpp = 4;
		fs->multi.mere = 4;
		fs->multi.jf = -2;

	}
	if (option == 2)
	{
		fs->multi.xmin = -2;
		fs->multi.xmax = 1;
		fs->multi.ymin = -2;
		fs->multi.ymax = 1.2;
		fs->multi.itmax = 150;
		fs->multi.zoom = 150;
		fs->col.cx = 0;
		fs->col.cxx = 17;
		fs->col.cy = 0;
		fs->col.cyy = 11;
		fs->col.swoosh = 0;
		fs->col.nike = 0;
		fs->multi.bpp = 4;
		fs->multi.mere = 4;
		fs->multi.jf = 2;
	}
}
