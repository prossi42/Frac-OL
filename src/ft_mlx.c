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
	mlx_string_put(fs->sd.init, fs->sd.wdow, 280, 75, 0x000000, "Press T");
	mlx_hook(fs->sd.wdow, 2, (1L << 0), key_hook, fs);
	mlx_hook(fs->sd.wdow, 6, (1L << 6), mouse_hook, fs);
	mlx_hook(fs->sd.wdow, 4, (1L << 2), roll_hook, fs);
	mlx_loop(fs->sd.init);
	return (0);
}
