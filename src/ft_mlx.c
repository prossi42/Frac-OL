/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 13:42:36 by prossi            #+#    #+#             */
/*   Updated: 2017/09/08 13:42:38 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int		key_hook(int keycode, t_fs *fs)
{
	if (keycode == 53)
	{
		ft_putstr("\n	End Of Program");
		exit(-1);
	}
	if (keycode == 123)
		fs->sd.xmin += 0.10;
	if (keycode == 124)
		fs->sd.xmin -= 0.10;
	if (keycode == 125)
		fs->sd.ymin -= 0.10;
	if (keycode == 126)
		fs->sd.ymin += 0.10;
	if (keycode == 69)
		fs->sd.zoom += 10;
	if (keycode == 78)
		fs->sd.zoom -= 10;
	if (keycode == 67)
		if (fs->sd.mere < 4)
			fs->sd.mere += 0.05;
	if (keycode == 75)
		if (fs->sd.mere > 0)
			fs->sd.mere -= 0.05;
	if (keycode == 0)
		if (fs->sd.jf < 2)
			fs->sd.jf += 0.05;
	if (keycode == 11)
		if (fs->sd.jf > -2)
			fs->sd.jf -= 0.05;
	if (keycode == 35)
	{
		if (fs->psy == 0)
			fs->psy = 1;
		else
			fs->psy = 0;
	}
	if (keycode == 36)
	{
		if (fs->m == 1)
			ft_init_struct(fs, 0);
		if (fs->m == 2)
			ft_init_struct(fs, 1);
		if (fs->m == 3)
			ft_init_struct(fs, 2);
	}
	if (keycode == 18)
	{
		ft_init_struct(fs, 0);
		fs->m = 1;
	}
	if (keycode == 19)
	{
		ft_init_struct(fs, 1);
		fs->m = 2;
	}
	if (keycode == 20)
	{
		ft_init_struct(fs, 2);
		fs->m = 3;
	}
	if (keycode == 83)
		multiscreen(fs, 1);
	if (keycode == 84)
		multiscreen(fs, 2);
	if (keycode == 85)
		multiscreen(fs, 3);
	mlx_destroy_image(fs->sd.init, fs->sd.img);
	ft_init_struct(fs, 3);
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

int		mouse_hook(int x, int y, t_fs *fs)
{
	if (fs->sd.pause == 1)
		if (x >= 0 && x <= WINSIZE_X && y >= 0 && y <= WINSIZE_Y)
		{
			fs->sd.mouse_x = x;
			fs->sd.mouse_y = y;
		}
	mlx_destroy_image(fs->sd.init, fs->sd.img);
	ft_init_struct(fs, 3);
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

int		roll_hook(int button, int x, int y, t_fs *fs)
{
	if (button == 1)
	{
		if (fs->sd.pause == 0)
			fs->sd.pause = 1;
		else
			fs->sd.pause = 0;
	}
	// if (button == 4)
	// 	fs->sd.zoom += 10;
	// if (button == 5)
	// 	fs->sd.zoom -= 10;
	mlx_destroy_image(fs->sd.init, fs->sd.img);
	ft_init_struct(fs, 3);
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

void	mlx_pixel_put_to_image(t_sd sd, int x, int y, int color)
{
	int			color1;
	int			color2;
	int			color3;
	int			bit_pix;
	float		img_size;

	img_size = WINSIZE_X * WINSIZE_Y * sd.bpp / 8;
	if (x < 0 || y < 0 || y * sd.size_line + x * sd.bpp / 8 > \
		img_size
		|| x >= sd.size_line / (sd.bpp / 8) || y >= img_size / \
		sd.size_line)
		return ;
	color1 = color;
	color2 = color >> 8;
	color3 = color >> 16;
	bit_pix = sd.bpp / 8;
	sd.map[y * sd.size_line + x * bit_pix] = color1;
	sd.map[y * sd.size_line + x * bit_pix + 1] = color2;
	sd.map[y * sd.size_line + x * bit_pix + 2] = color3;
}

int		ft_mlx(t_fs *fs)
{
	fs->sd.init = mlx_init();
	fs->sd.wdow = mlx_new_window(fs->sd.init, WINSIZE_X, WINSIZE_Y, \
		"WTF !?!");
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
	mlx_hook(fs->sd.wdow, 2, (1L << 0), key_hook, fs);
	mlx_hook(fs->sd.wdow, 6, (1L << 6), mouse_hook, fs);
	mlx_hook(fs->sd.wdow, 4, (1L << 2), roll_hook, fs);
	mlx_loop(fs->sd.init);
	return (0);
}
