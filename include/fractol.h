/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:37:49 by prossi            #+#    #+#             */
/*   Updated: 2017/09/07 13:40:39 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include "../libft/include/off_libft/libft.h"
# include "../libft/include/pimp_libft/my_libft.h"
# define WINSIZE_X 600
# define WINSIZE_Y 600
/*
** Structure de la Fractale de Mandelbrot
*/

typedef struct		s_sd
{
	void			*init;
	void			*wdow;
	void			*img;
	char			*map;
	double			xmin;
	double			xmax;
	double			ymin;
	double			ymax;
	double			cr;
	double			ci;
	double			zr;
	double			zi;
	double			tmp;
	int				img_x;
	int				img_y;
	int				itmax;
	int				endian;
	int				zoom;
	int				win_x;
	int				win_y;
	int				bpp;
	int				size_line;
}					t_sd;

typedef struct		s_first
{
	t_sd			sd;
}					t_first;

void				ft_init_struct(t_first *first, int option);
int					ft_mlx(t_first *first);
void 				ft_mandel(t_first *first);
void				mlx_pixel_put_to_image(t_sd sd, int x, int y, \
	int color);
void				ft_affich_first(t_first *first, int option);

#endif
