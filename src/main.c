/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 12:46:48 by prossi            #+#    #+#             */
/*   Updated: 2017/09/07 13:56:20 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int		ft_detect_map(t_fs *fs, char **map)
{
	if (ft_strcmp(map[1], "mandelbrot") == 0)
	{
		ft_init_struct(fs, 0);
		fs->m = 1;
		return (0);
	}
	if (ft_strcmp(map[1], "tricorn") == 0)
	{
		ft_init_struct(fs, 1);
		fs->m = 2;
		return (0);
	}
	if (ft_strcmp(map[1], "julia") == 0)
	{
		ft_init_struct(fs, 2);
		fs->m = 3;
		return (0);
	}
	return (-1);
}

int		main(int argc, char **argv)
{
	t_fs		fs;

	if (argc != 2)
	{
		ft_affich_fs(0);
		return (-1);
	}
	if (ft_detect_map(&fs, argv) == -1)
	{
		ft_affich_fs(0);
		return (-1);
	}
	fs.col.tab = ft_tabint(18, 12);
	ft_tabcolor(&fs);
	ft_mlx(&fs);
	return (0);
}
