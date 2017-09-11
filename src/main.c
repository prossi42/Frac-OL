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

int		ft_detect_map(t_first *first, char **map)
{
	if (ft_strcmp(map[1], "mandelbrot") == 0)
	{
		ft_init_struct(first, 0);
		return (0);
	}
	return (-1);
}

int		main(int argc, char **argv)
{
	t_first		first;

	if (argc != 2)
	{
		ft_affich_first(&first, 0);
		return (-1);
	}
	if (ft_detect_map(&first, argv) == -1)
		return (-1);
	ft_mlx(&first);
	return (0);
}