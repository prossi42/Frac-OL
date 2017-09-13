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

void	ft_tabcolorssss(t_first *first)
{
	first->col.tab[4][0] = 0x3300CC;
	first->col.tab[4][1] = 0x3333CC;
	first->col.tab[4][2] = 0x3366CC;
	first->col.tab[4][3] = 0x3399CC;
	first->col.tab[4][4] = 0x33CCCC;
	first->col.tab[4][5] = 0x33FFCC;
	first->col.tab[4][6] = 0x66FFCC;
	first->col.tab[4][7] = 0x66CCCC;
	first->col.tab[4][8] = 0x6699CC;
	first->col.tab[4][9] = 0x6666CC;
	first->col.tab[4][10] = 0x6633CC;
	first->col.tab[4][11] = 0x6600CC;
	first->col.tab[4][12] = 0xFF00CC;
	first->col.tab[4][13] = 0xFF33CC;
	first->col.tab[4][14] = 0xFF66CC;
	first->col.tab[4][15] = 0xFF99CC;
	first->col.tab[4][16] = 0xFFCCCC;
	first->col.tab[4][17] = 0xFFFFCC;
	ft_tabcolor_sd(first);
}

void	ft_tabcolorsss(t_first *first)
{
	first->col.tab[3][0] = 0x330099;
	first->col.tab[3][1] = 0x333399;
	first->col.tab[3][2] = 0x336699;
	first->col.tab[3][3] = 0x339999;
	first->col.tab[3][4] = 0x33CC99;
	first->col.tab[3][5] = 0x33FF99;
	first->col.tab[3][6] = 0x66FF99;
	first->col.tab[3][7] = 0x66CC99;
	first->col.tab[3][8] = 0x669999;
	first->col.tab[3][9] = 0x666699;
	first->col.tab[3][10] = 0x663399;
	first->col.tab[3][11] = 0x660099;
	first->col.tab[3][12] = 0xFF0099;
	first->col.tab[3][13] = 0xFF3399;
	first->col.tab[3][14] = 0xFF6699;
	first->col.tab[3][15] = 0xFF9999;
	first->col.tab[3][16] = 0xFFCC99;
	first->col.tab[3][17] = 0xFFFF99;
	ft_tabcolorssss(first);
}

void	ft_tabcolorss(t_first *first)
{
	first->col.tab[2][0] = 0x330066;
	first->col.tab[2][1] = 0x333366;
	first->col.tab[2][2] = 0x336666;
	first->col.tab[2][3] = 0x339966;
	first->col.tab[2][4] = 0x33CC66;
	first->col.tab[2][5] = 0x33FF66;
	first->col.tab[2][6] = 0x66FF66;
	first->col.tab[2][7] = 0x66CC66;
	first->col.tab[2][8] = 0x669966;
	first->col.tab[2][9] = 0x666666;
	first->col.tab[2][10] = 0x663366;
	first->col.tab[2][11] = 0x660066;
	first->col.tab[2][12] = 0xFF0066;
	first->col.tab[2][13] = 0xFF3366;
	first->col.tab[2][14] = 0xFF6666;
	first->col.tab[2][15] = 0xFF9966;
	first->col.tab[2][16] = 0xFFCC66;
	first->col.tab[2][17] = 0xFFFF66;
	ft_tabcolorsss(first);
}

void	ft_tabcolors(t_first *first)
{
	first->col.tab[1][0] = 0x330033;
	first->col.tab[1][1] = 0x333333;
	first->col.tab[1][2] = 0x336633;
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
	ft_tabcolorss(first);
}

void	ft_tabcolor(t_first *first)
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
	ft_tabcolors(first);
}
