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

void	ft_mandel(t_first *first)
{
	int			x;
	int			y;
	int			i;
	double		tmp;
	int			jf;

	x = 0;
	jf = 0;
	while (x < WINSIZE_X)
	{
		y = 0;
		while (y < WINSIZE_Y)
		{
			first->sd.cr = ((x / first->sd.zoom) + first->sd.xmin);
			first->sd.ci = ((y / first->sd.zoom) + first->sd.ymin);
			first->sd.zr = 0;
			first->sd.zi = 0;
			i = 0;
			while (first->sd.zr * first->sd.zr + first->sd.zi * first->sd.zi < 4 && i < first->sd.itmax )
			{
				tmp = first->sd.zr;
				first->sd.zr = first->sd.zr * first->sd.zr - first->sd.zi * first->sd.zi + first->sd.cr;
				first->sd.zi = 2 * first->sd.zi * tmp + first->sd.ci;
				i++;
			}
			if (i == first->sd.itmax)
				mlx_pixel_put_to_image(first->sd, x + 100, y, 0xFFFFFF);
			else
			{
				jf = i;
				i += 20000;
				mlx_pixel_put_to_image(first->sd, x, y, 0x003366 - i);
				i = jf;
			}
			y++;
		}
		x++;
	}
}
