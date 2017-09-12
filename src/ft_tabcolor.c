/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcolor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 14:42:52 by prossi            #+#    #+#             */
/*   Updated: 2017/09/12 14:43:12 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void 	ft_tabcolorss(t_first *first)
{
	first->col.tab[1][0] = 
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
	first->col.tab[1][0] =
}

void 	ft_tabcolors(t_first *first)
{
	first->col.tab[1][0] = 0x330033;
	first->col.tab[1][1] = 0x333333;
	first->col.tab[1][2] = 0x336633
	first->col.tab[1][3] = 0x339933;
	first->col.tab[1][4] = 0x33CC33;
	first->col.tab[1][5] = 0x33FF33;
	first->col.tab[1][6] = 0x66FF33;
	first->col.tab[1][7] = 0x66CC33;
	first->col.tab[1][8] = 0x669933;
	first->col.tab[1][9] = 0x666633;
	first->col.tab[1][10] = 0x663333;
	first->col.tab[1][11] = 0x660033;
	first->col.tab[1][12] = 0xFF0033;
	first->col.tab[1][13] = 0xFF3333;
	first->col.tab[1][14] = 0xFF6633;
	first->col.tab[1][15] = 0xFF9933;
	first->col.tab[1][16] = 0xFFCC33;
	first->col.tab[1][17] = 0xFFFF33;
	ft_tabcolorss(t_first *first);
}

void 	ft_tabcolor(t_first *first)
{
	first->col.tab[0][0] = 0x330000;
	first->col.tab[0][1] = 0x333300;
	first->col.tab[0][2] = 0x336600;
	first->col.tab[0][3] = 0x339900;
	first->col.tab[0][4] = 0x33CC00;
	first->col.tab[0][5] = 0x33FF00;
	first->col.tab[0][6] = 0x66FF00;
	first->col.tab[0][7] = 0x66CC00;
	first->col.tab[0][8] = 0x669900;
	first->col.tab[0][9] = 0x666600;
	first->col.tab[0][10] = 0x663300;
	first->col.tab[0][11] = 0x660000;
	first->col.tab[0][12] = 0xFF0000;
	first->col.tab[0][13] = 0xFF3300;
	first->col.tab[0][14] = 0xFF6600;
	first->col.tab[0][15] = 0xFF9900;
	first->col.tab[0][16] = 0xFFCC00;
	first->col.tab[0][17] = 0xFFFF00;
	ft_tabcolors(t_first *first);
}
