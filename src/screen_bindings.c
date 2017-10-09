/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen_bindings.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 10:02:24 by prossi            #+#    #+#             */
/*   Updated: 2017/10/09 10:02:26 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int		key(int keycode)
{
	if (keycode == 53)
		exit(-1);
	return (0);
}

void	france(t_fs *fs)
{
	int		x;
	int		y;

	x = 0;
	while (x <= WINSIZE_X)
	{
		y = 0;
		while (y <= 350)
		{
			if (x >= 0 && x <= 200)
				mlx_pixel_put(fs->bind.init, fs->bind.wdow, x, y, 0x3333FF);
			if (x > 200 && x <= 400)
				mlx_pixel_put(fs->bind.init, fs->bind.wdow, x, y, 0xFFFFFF);
			if (x > 400 && x <= WINSIZE_X)
				mlx_pixel_put(fs->bind.init, fs->bind.wdow, x, y, 0xFF0000);
			y++;
		}
		x++;
	}
}

void	screen_bindingsd(t_fs *fs)
{
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 175, 0x000000, \
		"Deplacement fractale souris (Julia) : d");
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 200, 0x000000, \
		"Inversement fractale : a / b");
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 225, 0x000000, \
		"Psyche : p");
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 250, 0x000000, \
		"Iteration +/- : i / j");
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 275, 0x000000, \
		"Fondu / defondu fractale : / & *");
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 300, 0x000000, \
		"Variation / Pause (Julia) : v");
}

void	screen_bindings(t_fs *fs)
{
	fs->bind.init = mlx_init();
	fs->bind.wdow = mlx_new_window(fs->bind.init, WINSIZE_X, \
		350, "Key Bindings");
	france(fs);
	mlx_string_put(fs->bind.init, fs->bind.wdow, 175, 0, 0x000000, \
		"Here comes the sun <3");
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 50, 0x000000, \
		"Quitter : Esc");
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 75, 0x000000, \
		"Reset : Return");
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 100, 0x000000, \
		"Changement Fractale : 1/2/3");
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 125, 0x000000, \
		"Multi ecran : 1/2/3 pav. num.");
	mlx_string_put(fs->bind.init, fs->bind.wdow, 0, 150, 0x000000, \
		"Deplacement fractale clavier : fleches dir");
	screen_bindingsd(fs);
	mlx_hook(fs->bind.wdow, 2, (1L << 0), key, fs);
	mlx_loop(fs->bind.init);
}
