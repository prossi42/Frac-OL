/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_pixel_put_to_image_multi.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 11:53:07 by prossi            #+#    #+#             */
/*   Updated: 2017/09/19 11:53:08 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	mlx_pixel_put_to_image_multi(t_multi multi, int x, int y, int color)
{
	int			color1;
	int			color2;
	int			color3;
	int			bit_pix;
	float		img_size;

	img_size = WINSIZE_X * WINSIZE_Y * multi.bpp / 8;
	if (x < 0 || y < 0 || y * multi.size_line + x * multi.bpp / 8 > \
		img_size
		|| x >= multi.size_line / (multi.bpp / 8) || y >= img_size / \
		multi.size_line)
		return ;
	color1 = color;
	color2 = color >> 8;
	color3 = color >> 16;
	bit_pix = multi.bpp / 8;
	multi.map[y * multi.size_line + x * bit_pix] = color1;
	multi.map[y * multi.size_line + x * bit_pix + 1] = color2;
	multi.map[y * multi.size_line + x * bit_pix + 2] = color3;
}

void	mlx_pixel_put_to_image_multisd(t_multi multi, int x, int y, int color)
{
	int			color1;
	int			color2;
	int			color3;
	int			bit_pix;
	float		img_size;

	img_size = WINSIZE_X * WINSIZE_Y * multi.bpp / 8;
	if (x < 0 || y < 0 || y * multi.size_line + x * multi.bpp / 8 > \
		img_size
		|| x >= multi.size_line / (multi.bpp / 8) || y >= img_size / \
		multi.size_line)
		return ;
	color1 = color;
	color2 = color >> 8;
	color3 = color >> 16;
	bit_pix = multi.bpp / 8;
	multi.mapsd[y * multi.size_line + x * bit_pix] = color1;
	multi.mapsd[y * multi.size_line + x * bit_pix + 1] = color2;
	multi.mapsd[y * multi.size_line + x * bit_pix + 2] = color3;
}

void	mlx_pixel_put_to_image_multitd(t_multi multi, int x, int y, int color)
{
	int			color1;
	int			color2;
	int			color3;
	int			bit_pix;
	float		img_size;

	img_size = WINSIZE_X * WINSIZE_Y * multi.bpp / 8;
	if (x < 0 || y < 0 || y * multi.size_line + x * multi.bpp / 8 > \
		img_size
		|| x >= multi.size_line / (multi.bpp / 8) || y >= img_size / \
		multi.size_line)
		return ;
	color1 = color;
	color2 = color >> 8;
	color3 = color >> 16;
	bit_pix = multi.bpp / 8;
	multi.maptd[y * multi.size_line + x * bit_pix] = color1;
	multi.maptd[y * multi.size_line + x * bit_pix + 1] = color2;
	multi.maptd[y * multi.size_line + x * bit_pix + 2] = color3;
}
