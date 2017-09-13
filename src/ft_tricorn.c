/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tricorn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:08:15 by prossi            #+#    #+#             */
/*   Updated: 2017/09/13 11:08:17 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void 	ft_color_tricorn(t_first *first, int x, int y)
{
	mlx_pixel_put_to_image(first->sd, x, y, first->col.tab[first->col.cy][first->col.cx]);
	if (first->col.cy == 11)
		first->col.cy = 0;
	if (first->col.cx == 17)
	{
		first->col.cy++;
		first->col.cx = 0;
	}
	first->col.cx++;
}

void	ft_tricorn(t_first *first)
{
	int			x;
	int			y;
	int			i;
	double		tmp;

	x = 0;
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
				first->sd.zi = -2 * first->sd.zi * tmp + first->sd.ci;
				i++;
			}
			if (i == first->sd.itmax)
			{
				mlx_pixel_put_to_image(first->sd, x, y, 0xFFFFFF);
			}
			else
				ft_color_tricorn(first, x, y);
			y++;
		}
		x++;
	}
}
