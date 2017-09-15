/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mandel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 13:42:09 by prossi            #+#    #+#             */
/*   Updated: 2017/09/08 13:42:20 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_mandel(t_fs *fs)
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
			while (fs->sd.zr * fs->sd.zr + fs->sd.zi * fs->sd.zi < 4 && i < fs->sd.itmax )
			{
				tmp = fs->sd.zr;
				fs->sd.zr = fs->sd.zr * fs->sd.zr - fs->sd.zi * fs->sd.zi + fs->sd.cr;
				fs->sd.zi = 2 * fs->sd.zi * tmp + fs->sd.ci;
				i++;
			}
			if (i == fs->sd.itmax)
			{
				mlx_pixel_put_to_image(fs->sd, x, y, 0xFFFFFF);
			}
			else
				mlx_pixel_put_to_image(fs->sd, x, y, 0x012345);
			y++;
		}
		x++;
	}
}
