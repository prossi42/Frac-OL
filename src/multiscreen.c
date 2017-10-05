/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiscreen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:39:26 by prossi            #+#    #+#             */
/*   Updated: 2017/09/18 12:45:31 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	julia(t_fs *fs)
{
	fs->multi.inittd = mlx_init();
	fs->multi.wdowtd = mlx_new_window(fs->multi.inittd, WINSIZE_X, WINSIZE_Y, \
		"Julia");
	fs->multi.imgtd = mlx_new_image(fs->multi.inittd, WINSIZE_X, WINSIZE_Y);
	fs->multi.maptd = mlx_get_data_addr(fs->multi.imgtd, &fs->multi.bpp, \
		&fs->multi.size_line, &fs->multi.endian);
	ft_julia_multi(fs);
	mlx_put_image_to_window(fs->multi.inittd, fs->multi.wdowtd, \
		fs->multi.imgtd, 0, 0);
	mlx_hook(fs->multi.wdowtd, 2, (1L << 0), key_hook_multi_three, fs);
	mlx_loop(fs->multi.inittd);
}

void	tricorn(t_fs *fs)
{
	fs->multi.initsd = mlx_init();
	fs->multi.wdowsd = mlx_new_window(fs->multi.initsd, WINSIZE_X, WINSIZE_Y, \
		"Tricorn");
	fs->multi.imgsd = mlx_new_image(fs->multi.initsd, WINSIZE_X, WINSIZE_Y);
	fs->multi.mapsd = mlx_get_data_addr(fs->multi.imgsd, &fs->multi.bpp, \
		&fs->multi.size_line, &fs->multi.endian);
	ft_tricorn_multi(fs);
	mlx_put_image_to_window(fs->multi.initsd, fs->multi.wdowsd, \
		fs->multi.imgsd, 0, 0);
	mlx_hook(fs->multi.wdowsd, 2, (1L << 0), key_hook_multi_two, fs);
	mlx_loop(fs->multi.initsd);
}

void	mandel(t_fs *fs)
{
	fs->multi.init = mlx_init();
	fs->multi.wdow = mlx_new_window(fs->multi.init, WINSIZE_X, WINSIZE_Y, \
		"Mandelbrot");
	fs->multi.img = mlx_new_image(fs->multi.init, WINSIZE_X, WINSIZE_Y);
	fs->multi.map = mlx_get_data_addr(fs->multi.img, &fs->multi.bpp, \
		&fs->multi.size_line, &fs->multi.endian);
	ft_mandel_multi(fs);
	mlx_put_image_to_window(fs->multi.init, fs->multi.wdow, \
		fs->multi.img, 0, 0);
	mlx_hook(fs->multi.wdow, 2, (1L << 0), key_hook_multi, fs);
	mlx_loop(fs->multi.init);
}

void	multiscreen(t_fs *fs, int option)
{
	if (option == 1)
	{
		fs->p = 1;
		ft_init_struct_multi(fs, 0);
		mandel(fs);
	}
	if (option == 2)
	{
		fs->p = 2;
		ft_init_struct_multi(fs, 1);
		tricorn(fs);
	}
	if (option == 3)
	{
		fs->p = 3;
		ft_init_struct_multi(fs, 2);
		julia(fs);
	}
}
