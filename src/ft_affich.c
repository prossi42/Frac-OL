/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affich.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 13:44:56 by prossi            #+#    #+#             */
/*   Updated: 2017/10/06 10:42:02 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_affich_fs(int option)
{
	if (option == 0)
	{
		ft_putstr("\n Usage : ./exec. + map\n");
		ft_putstr(" \t--> mandelbrot / tricorn / julia\n");
	}
	if (option == 1)
	{
		ft_putstr("\n	End Of Program");
		exit(-1);
	}
}
