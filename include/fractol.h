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
# define WINSIZE_X 800
# define WINSIZE_Y 800
/*
** Structure de la Fractale de Mandelbrot
*/

typedef struct		s_col
{
	int				**tab;
	int				cx;
	int				cxx;
	int				cy;
	int				cyy;
	double			swoosh;
	double			nike;
}					t_col;

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
	int				img_x;
	int				img_y;
	int				itmax;
	int				endian;
	double			zoom;
	int				bpp;
	int				size_line;
	double			mere;
	double			jf;
	int				slide;
}					t_sd;

typedef struct		s_fs
{
	t_sd			sd;
	t_col			col;
	int				m;
	int				psy;
}					t_fs;

void				ft_init_struct(t_fs *fs, int option);
int					ft_mlx(t_fs *fs);
void 				ft_mandel(t_fs *fs);
void				ft_tricorn(t_fs *fs);
void				mlx_pixel_put_to_image(t_sd sd, int x, int y, \
	int color);
void				ft_affich_fs(t_fs *fs, int option);
void				ft_tabcolor(t_fs *fs);
void				ft_tabcolor_sd(t_fs *fs);
void				ft_tabcolor_td(t_fs *fs);
void				ft_color_tricorn(t_fs *fs, int x, int y);
void				ft_color_ext(t_fs *fs, int x, int y, int i);
void				ft_julia(t_fs *fs);
#endif
