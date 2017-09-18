/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook_multi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:49:53 by prossi            #+#    #+#             */
/*   Updated: 2017/09/18 14:49:54 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int		key_hook_multi(int keycode, t_fs *fs)
{
	if (keycode == 53)
	{
		ft_putstr("\n	End Of Program");
		exit(-1);
	}
	if (keycode == 123)
		fs->multi.xmin += 0.10;
	if (keycode == 124)
		fs->multi.xmin -= 0.10;
	if (keycode == 125)
		fs->multi.ymin -= 0.10;
	if (keycode == 126)
		fs->multi.ymin += 0.10;
	if (keycode == 69)
		fs->multi.zoom += 10;
	if (keycode == 78)
		fs->multi.zoom -= 10;
	if (keycode == 67)
		if (fs->multi.mere < 4)
			fs->multi.mere += 0.05;
	if (keycode == 75)
		if (fs->multi.mere > 0)
			fs->multi.mere -= 0.05;
	if (keycode == 0)
		if (fs->multi.jf < 2)
			fs->multi.jf += 0.05;
	if (keycode == 11)
		if (fs->multi.jf > -2)
			fs->multi.jf -= 0.05;
	if (keycode == 35)
	{
		if (fs->psy == 0)
			fs->psy = 1;
		else
			fs->psy = 0;
	}
	if (keycode == 36)
	{
		if (fs->p == 1)
			ft_init_struct_multi(fs, 0);
		if (fs->p == 2)
			ft_init_struct_multi(fs, 1);
		if (fs->p == 3)
			ft_init_struct_multi(fs, 2);
	}
	if (keycode == 18)
	{
		ft_init_struct_multi(fs, 0);
		fs->p = 1;
	}
	if (keycode == 19)
	{
		ft_init_struct_multi(fs, 1);
		fs->p = 2;
	}
	if (keycode == 20)
	{
		ft_init_struct_multi(fs, 2);
		fs->p = 3;
	}
	if (fs->p == 1)
	{
		mlx_destroy_image(fs->multi.init, fs->multi.img);
		fs->multi.img = mlx_new_image(fs->multi.init, WINSIZE_X, WINSIZE_Y);
		fs->multi.map = mlx_get_data_addr(fs->multi.img, &fs->multi.bpp, \
			&fs->multi.size_line, &fs->multi.endian);
		ft_mandel_multi(fs);
		mlx_put_image_to_window(fs->multi.init, fs->multi.wdow, \
			fs->multi.img, 0, 0);
	}
	if (fs->p == 2)
	{
		mlx_destroy_image(fs->multi.initsd, fs->multi.imgsd);
		fs->multi.imgsd = mlx_new_image(fs->multi.initsd, WINSIZE_X, WINSIZE_Y);
		fs->multi.mapsd = mlx_get_data_addr(fs->multi.imgsd, &fs->multi.bpp, \
			&fs->multi.size_line, &fs->multi.endian);
		ft_tricorn_multi(fs);
		mlx_put_image_to_window(fs->multi.initsd, fs->multi.wdowsd, \
			fs->multi.imgsd, 0, 0);
	}
	if (fs->p == 3)
	{
		mlx_destroy_image(fs->multi.inittd, fs->multi.imgtd);
		fs->multi.imgtd = mlx_new_image(fs->multi.inittd, WINSIZE_X, WINSIZE_Y);
		fs->multi.maptd = mlx_get_data_addr(fs->multi.imgtd, &fs->multi.bpp, \
			&fs->multi.size_line, &fs->multi.endian);
		ft_julia_multi(fs);
		mlx_put_image_to_window(fs->multi.inittd, fs->multi.wdowtd, \
			fs->multi.imgtd, 0, 0);
	}
	return (0);
}
