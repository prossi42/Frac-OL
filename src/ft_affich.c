/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affich.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:44:56 by prossi            #+#    #+#             */
/*   Updated: 2017/09/07 13:45:17 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_affich_fs(t_fs *fs, int option)
{
	if (option == 0)
	{
		ft_putstr("\n Usage : ./exec. + map\n");
		ft_putstr(" \t--> mandelbrot / tricorn / julia\n");
	}
}
