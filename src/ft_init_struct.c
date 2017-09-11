/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 22:14:34 by prossi            #+#    #+#             */
/*   Updated: 2017/09/07 13:55:05 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_init_struct(t_first *first, int option)
{
	if (option == 0)
	{
		first->sd.xmin = -2.1;
		first->sd.xmax = 0.6;
 		first->sd.ymin = -1.2;
		first->sd.ymax = 1.2;
		first->sd.itmax = 50;
		first->sd.zoom = 100;
		first->sd.img_x = -(WINSIZE_X / 2) + (WINSIZE_X / 6);
		first->sd.img_y = -(WINSIZE_Y / 2) + (WINSIZE_Y / 6);
	}
}
