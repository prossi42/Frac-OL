/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:35:01 by prossi            #+#    #+#             */
/*   Updated: 2017/10/05 10:35:02 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	mouse_hook_td(int x, int y, t_fs *fs)
{
	if (y > (WINSIZE_Y / 2) && x < (WINSIZE_X / 2))
	{
		fs->sd.cr = (x < fs->sd.mouse_x) ? (fs->sd.cr - 0.03) : \
		(fs->sd.cr + 0.03);
		fs->sd.ci = (y > fs->sd.mouse_y) ? (fs->sd.ci - 0.03) : \
		(fs->sd.ci + 0.03);
	}
	if (y > (WINSIZE_Y / 2) && x > (WINSIZE_X / 2))
	{
		fs->sd.cr = (x > fs->sd.mouse_x) ? (fs->sd.cr - 0.03) : \
		(fs->sd.cr + 0.03);
		fs->sd.ci = (y > fs->sd.mouse_y) ? (fs->sd.ci - 0.03) : \
		(fs->sd.ci + 0.03);
	}
}

void	mouse_hook_sd(int x, int y, t_fs *fs)
{
	if (x < (WINSIZE_X / 2) && y < (WINSIZE_Y / 2))
	{
		fs->sd.cr = (x < fs->sd.mouse_x) ? (fs->sd.cr + 0.03) : \
		(fs->sd.cr - 0.03);
		fs->sd.ci = (y < fs->sd.mouse_y) ? (fs->sd.ci + 0.03) : \
		(fs->sd.ci - 0.03);
	}
	if (x > (WINSIZE_X / 2) && y < (WINSIZE_Y / 2))
	{
		fs->sd.cr = (x > fs->sd.mouse_x) ? (fs->sd.cr + 0.03) : \
		(fs->sd.cr - 0.03);
		fs->sd.ci = (y < fs->sd.mouse_y) ? (fs->sd.ci + 0.03) : \
		(fs->sd.ci - 0.03);
	}
}

int		mouse_hook(int x, int y, t_fs *fs)
{
	if (x >= 0 && x <= WINSIZE_X && y >= 0 && y <= WINSIZE_Y)
	{
		if (fs->sd.var == 1)
		{
			mouse_hook_sd(x, y, fs);
			mouse_hook_td(x, y, fs);
		}
		fs->sd.mouse_x = x;
		fs->sd.mouse_y = y;
	}
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
