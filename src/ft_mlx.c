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

int		key_hook(int keycode, t_first *first)
{
	if (keycode == 53)
	{
		ft_putstr("\n	End Of Program");
		exit(-1);
	}
	if (keycode == 123)
		first->sd.xmin += 0.10;
	if (keycode == 124)
		first->sd.xmin -= 0.10;
	if (keycode == 125)
		first->sd.ymin += 0.10;
	if (keycode == 126)
		first->sd.ymin -= 0.10;
	mlx_destroy_image(first->sd.init, first->sd.img);
	ft_init_struct(first, 3);
	first->sd.img = mlx_new_image(first->sd.init, WINSIZE_X, WINSIZE_Y);
	first->sd.map = mlx_get_data_addr(first->sd.img, &first->sd.bpp, \
		&first->sd.size_line, &first->sd.endian);
	if (first->m == 1)
		ft_mandel(first);
	if (first->m == 2)
		ft_tricorn(first);
	mlx_put_image_to_window(first->sd.init, first->sd.wdow, \
		first->sd.img, 0, 0);
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

int		ft_mlx(t_first *first)
{
	first->sd.init = mlx_init();
	first->sd.wdow = mlx_new_window(first->sd.init, WINSIZE_X, WINSIZE_Y, \
		"WTF !?!");
	first->sd.img = mlx_new_image(first->sd.init, WINSIZE_X, WINSIZE_Y);
	if (!(first->sd.map = (char *)malloc(sizeof(char) * (WINSIZE_X * \
		WINSIZE_Y * first->sd.bpp))))
		return (-1);
	first->sd.map = mlx_get_data_addr(first->sd.img, &first->sd.bpp, \
		&first->sd.size_line, &first->sd.endian);
	if (first->m == 1)
		ft_mandel(first);
	if (first->m == 2)
		ft_tricorn(first);
	mlx_put_image_to_window(first->sd.init, first->sd.wdow, \
		first->sd.img, 0, 0);
	mlx_hook(first->sd.wdow, 2, (1L << 0), key_hook, first);
	mlx_loop(first->sd.init);
	return (0);
}
