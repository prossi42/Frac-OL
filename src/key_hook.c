/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:51:31 by prossi            #+#    #+#             */
/*   Updated: 2017/10/05 09:51:36 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int		key_hook_fih(int keycode, t_fs *fs)
{
	if (keycode == 123)
	{
		fs->sd.xmin += 0.10;
		fs->sd.xmax += 0.10;
	}
	if (keycode == 124)
	{
		fs->sd.xmin -= 0.10;
		fs->sd.xmax -= 0.10;
	}
	if (keycode == 125)
	{
		fs->sd.ymin -= 0.10;
		fs->sd.ymax -= 0.10;
	}
	if (keycode == 126)
	{
		fs->sd.ymin += 0.10;
		fs->sd.ymax += 0.10;
	}
	return (0);
}

int		key_hook_fh(int keycode, t_fs *fs)
{
	if (keycode == 53)
	{
		ft_putstr("\n	End Of Program");
		exit(-1);
	}
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
	if (keycode == 83)
		multiscreen(fs, 1);
	if (keycode == 84)
		multiscreen(fs, 2);
	if (keycode == 85)
		multiscreen(fs, 3);
	return (0);
}

int		key_hook_td(int keycode, t_fs *fs)
{
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
	if (keycode == 34)
		fs->sd.itmax++;
	if (keycode == 38)
		fs->sd.itmax--;
	return (0);
}

int		key_hook_sd(int keycode, t_fs *fs)
{
	if (keycode == 0)
		if (fs->sd.jf < 2)
			fs->sd.jf += 0.05;
	if (keycode == 11)
		if (fs->sd.jf > -2)
			fs->sd.jf -= 0.05;
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
	if (keycode == 9)
	{
		if (fs->sd.var == 0)
			fs->sd.var = 1;
		else
			fs->sd.var = 0;
	}
	if (keycode == 2)
	{
		if (fs->sd.pause == 0)
			fs->sd.pause = 1;
		else
			fs->sd.pause = 0;
	}
	if (keycode == 17)
		screen_bindings(fs);
	return (0);
}

int		key_hook(int keycode, t_fs *fs)
{
	if (keycode >= 0 && keycode <= 20)
		key_hook_sd(keycode, fs);
	if (keycode > 20 && keycode <= 40)
		key_hook_td(keycode, fs);
	if (keycode > 40 && keycode <= 100)
		key_hook_fh(keycode, fs);
	if (keycode > 100 && keycode <= 200)
		key_hook_fih(keycode, fs);
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
