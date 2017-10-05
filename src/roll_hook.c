/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roll_hook.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:03:53 by prossi            #+#    #+#             */
/*   Updated: 2017/10/05 11:03:55 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	roll_hook_td(int button, int x, int y, t_fs *fs)
{
	if (button == 4)
	{
		fs->sd.zoom += 10;
		fs->sd.xmin += ((double)x - ((double)x / (double)WINSIZE_X * \
		((double)WINSIZE_X * 0.1))) / 10000;
		fs->sd.ymin += ((double)y - ((double)y / (double)WINSIZE_Y * \
		((double)WINSIZE_Y * 0.1))) / 10000;
	}
	if (button == 5)
	{
		fs->sd.zoom -= 10;
		fs->sd.xmin -= ((double)x - ((double)x / (double)WINSIZE_X * \
		((double)WINSIZE_X * 0.1))) / 10000;
		fs->sd.ymin -= ((double)y - ((double)y / (double)WINSIZE_Y * \
		((double)WINSIZE_Y * 0.1))) / 10000;
	}
}

void	roll_hook_sd(int button, t_fs *fs)
{
	if (button == 1)
	{
		if (fs->sd.pause == 0)
			fs->sd.pause = 1;
		else
			fs->sd.pause = 0;
	}
	if (button == 2)
	{
		if (fs->sd.var == 0)
			fs->sd.var = 1;
		else
			fs->sd.var = 0;
	}
}

int		roll_hook(int button, int x, int y, t_fs *fs)
{
	if (button == 1 || button == 2)
		roll_hook_sd(button, fs);
	if (button == 4 || button == 5)
		roll_hook_td(button, x, y, fs);
	mlx_destroy_image(fs->sd.init, fs->sd.img);
	fs->sd.img = mlx_new_image(fs->sd.init, WINSIZE_X, WINSIZE_Y);
	fs->sd.map = mlx_get_data_addr(fs->sd.img, &fs->sd.bpp, \
		&fs->sd.size_line, &fs->sd.endian);
	if (fs->m == 1)
		ft_mandel(fs);
	if (fs->m == 2)
		ft_tricorn(fs);
	if (fs->m == 3)
		ft_julia(fs);
	mlx_put_image_to_window(fs->sd.init, fs->sd.wdow, \
		fs->sd.img, 0, 0);
	return (0);
}
