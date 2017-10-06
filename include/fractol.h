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

# include "../mlx/mlx.h"
# include <stdio.h>
# include "../libft/include/off_libft/libft.h"
# include "../libft/include/pimp_libft/my_libft.h"
# define WINSIZE_X 600
# define WINSIZE_Y 600

typedef struct		s_multi
{
	void			*init;
	void			*initsd;
	void			*inittd;
	void			*wdow;
	void			*wdowsd;
	void			*wdowtd;
	void			*img;
	void			*imgsd;
	void			*imgtd;
	char			*map;
	char			*mapsd;
	char			*maptd;
	int				bpp;
	int				size_line;
	int				endian;
	double			xmin;
	double			xmax;
	double			ymin;
	double			ymax;
	double			cr;
	double			ci;
	double			zr;
	double			zi;
	int				itmax;
	double			zoom;
	double			mere;
	double			jf;
	int				frac;
	int				x;
	int				y;
	double			tmp;
}					t_multi;

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
	int				itmax;
	int				endian;
	double			zoom;
	int				bpp;
	int				size_line;
	double			mere;
	double			jf;
	int				mouse_x;
	int				mouse_y;
	int				pause;
	int				center;
	int				var;
	int				x;
	int				y;
	double			tmp;
	double			imx;
	double			imy;
}					t_sd;

typedef struct		s_fs
{
	t_sd			sd;
	t_col			col;
	t_multi			multi;
	int				m;
	int				p;
	int				psy;
}					t_fs;

void				ft_init_struct(t_fs *fs, int option);
int					ft_mlx(t_fs *fs);
void				ft_mandel(t_fs *fs);
void				ft_tricorn(t_fs *fs);
void				mlx_pixel_put_to_image(t_sd sd, int x, int y, \
	int color);
void				ft_affich_fs(int option);
void				ft_tabcolor(t_fs *fs);
void				ft_tabcolor_sd(t_fs *fs);
void				ft_tabcolor_td(t_fs *fs);
void				ft_color_tricorn(t_fs *fs, int x, int y);
void				ft_color_ext(t_fs *fs, int x, int y, int i);
void				ft_julia(t_fs *fs);
void				multiscreen(t_fs *fs, int option);
void				ft_mandel_multi(t_fs *fs);
void				ft_tricorn_multi(t_fs *fs);
void				ft_julia_multi(t_fs *fs);
void				ft_color_multi(t_fs *fs);
void				ft_color_tricorn_multi(t_fs *fs, int x, int y);
void				ft_color_ext_multi(t_fs *fs, int x, int y, int i);
void				ft_init_struct_multi(t_fs *fs, int option);
int					key_hook_multi(int keycode, t_fs *fs);
int					key_hook_multisd(int keycode, t_fs *fs);
int					key_hook_multitd(int keycode, t_fs *fs);
void				mlx_pixel_put_to_image_multi(t_multi multi, int x, int y, \
	int color);
void				mlx_pixel_put_to_image_multisd(t_multi multi, int x, \
	int y, int color);
void				mlx_pixel_put_to_image_multitd(t_multi multi, int x, \
	int y, int color);
void				ft_julia_bis(t_fs *fs);
int					key_hook(int keycode, t_fs *fs);
int					mouse_hook(int x, int y, t_fs *fs);
int					roll_hook(int button, int x, int y, t_fs *fs);
int					key_hook_multi_two(int keycode, t_fs *fs);
int					key_hook_multi_three(int keycode, t_fs *fs);
#endif
