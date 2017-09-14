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

void 	ft_color_ext(t_first *first, int x, int y)
{
	first->col.nike += 1;
	// mlx_pixel_put_to_image(first->sd, x, y, first->col.tab[first->col.cyy][first->col.cxx]);
	mlx_pixel_put_to_image(first->sd, x, y, 0xFFFFFF);
	if (first->col.nike > 1000)
	{
		if (first->col.cyy == 0)
			first->col.cyy = 11;
		if (first->col.cxx == 0)
		{
			first->col.cyy--;
			first->col.cxx = 17;
		}
		first->col.cxx--;
		first->col.nike = 0;
	}
}

void 	ft_color_tricorn(t_first *first, int x, int y)
{
	first->col.swoosh += 0.10;
	mlx_pixel_put_to_image(first->sd, x, y, first->col.tab[first->col.cy][first->col.cx]);
	if (first->col.swoosh > 10)
	{
		if (first->col.cy == 11)
			first->col.cy = 0;
		if (first->col.cx == 10)
		{
			first->col.cy++;
			first->col.cx = 0;
		}
		first->col.cx++;
		first->col.swoosh = 0;
	}
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
			while (first->sd.zr * first->sd.zr + first->sd.zi * first->sd.zi < first->sd.mere && i < first->sd.itmax )
			{
				tmp = first->sd.zr;
				first->sd.zr = first->sd.zr * first->sd.zr - first->sd.zi * first->sd.zi + first->sd.cr;
				first->sd.zi = first->sd.jf * first->sd.zi * tmp + first->sd.ci;
				i++;
			}
			if (i == first->sd.itmax)
			{
				ft_color_tricorn(first, x, y);
			}
			else
				ft_color_ext(first, x, y);
			y++;
		}
		x++;
	}
}
