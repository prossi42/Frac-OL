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

void	ft_tabcolorssss(t_fs *fs)
{
	fs->col.tab[4][0] = 0x3300CC;
	fs->col.tab[4][1] = 0x3333CC;
	fs->col.tab[4][2] = 0x3366CC;
	fs->col.tab[4][3] = 0x3399CC;
	fs->col.tab[4][4] = 0x33CCCC;
	fs->col.tab[4][5] = 0x33FFCC;
	fs->col.tab[4][6] = 0x66FFCC;
	fs->col.tab[4][7] = 0x66CCCC;
	fs->col.tab[4][8] = 0x6699CC;
	fs->col.tab[4][9] = 0x6666CC;
	fs->col.tab[4][10] = 0x6633CC;
	fs->col.tab[4][11] = 0x6600CC;
	fs->col.tab[4][12] = 0xFF00CC;
	fs->col.tab[4][13] = 0xFF33CC;
	fs->col.tab[4][14] = 0xFF66CC;
	fs->col.tab[4][15] = 0xFF99CC;
	fs->col.tab[4][16] = 0xFFCCCC;
	fs->col.tab[4][17] = 0xFFFFCC;
	ft_tabcolor_sd(fs);
}

void	ft_tabcolorsss(t_fs *fs)
{
	fs->col.tab[3][0] = 0x330099;
	fs->col.tab[3][1] = 0x333399;
	fs->col.tab[3][2] = 0x336699;
	fs->col.tab[3][3] = 0x339999;
	fs->col.tab[3][4] = 0x33CC99;
	fs->col.tab[3][5] = 0x33FF99;
	fs->col.tab[3][6] = 0x66FF99;
	fs->col.tab[3][7] = 0x66CC99;
	fs->col.tab[3][8] = 0x669999;
	fs->col.tab[3][9] = 0x666699;
	fs->col.tab[3][10] = 0x663399;
	fs->col.tab[3][11] = 0x660099;
	fs->col.tab[3][12] = 0xFF0099;
	fs->col.tab[3][13] = 0xFF3399;
	fs->col.tab[3][14] = 0xFF6699;
	fs->col.tab[3][15] = 0xFF9999;
	fs->col.tab[3][16] = 0xFFCC99;
	fs->col.tab[3][17] = 0xFFFF99;
	ft_tabcolorssss(fs);
}

void	ft_tabcolorss(t_fs *fs)
{
	fs->col.tab[2][0] = 0x330066;
	fs->col.tab[2][1] = 0x333366;
	fs->col.tab[2][2] = 0x336666;
	fs->col.tab[2][3] = 0x339966;
	fs->col.tab[2][4] = 0x33CC66;
	fs->col.tab[2][5] = 0x33FF66;
	fs->col.tab[2][6] = 0x66FF66;
	fs->col.tab[2][7] = 0x66CC66;
	fs->col.tab[2][8] = 0x669966;
	fs->col.tab[2][9] = 0x666666;
	fs->col.tab[2][10] = 0x663366;
	fs->col.tab[2][11] = 0x660066;
	fs->col.tab[2][12] = 0xFF0066;
	fs->col.tab[2][13] = 0xFF3366;
	fs->col.tab[2][14] = 0xFF6666;
	fs->col.tab[2][15] = 0xFF9966;
	fs->col.tab[2][16] = 0xFFCC66;
	fs->col.tab[2][17] = 0xFFFF66;
	ft_tabcolorsss(fs);
}

void	ft_tabcolors(t_fs *fs)
{
	fs->col.tab[1][0] = 0x330033;
	fs->col.tab[1][1] = 0x333333;
	fs->col.tab[1][2] = 0x336633;
	fs->col.tab[1][3] = 0x339933;
	fs->col.tab[1][4] = 0x33CC33;
	fs->col.tab[1][5] = 0x33FF33;
	fs->col.tab[1][6] = 0x66FF33;
	fs->col.tab[1][7] = 0x66CC33;
	fs->col.tab[1][8] = 0x669933;
	fs->col.tab[1][9] = 0x666633;
	fs->col.tab[1][10] = 0x663333;
	fs->col.tab[1][11] = 0x660033;
	fs->col.tab[1][12] = 0xFF0033;
	fs->col.tab[1][13] = 0xFF3333;
	fs->col.tab[1][14] = 0xFF6633;
	fs->col.tab[1][15] = 0xFF9933;
	fs->col.tab[1][16] = 0xFFCC33;
	fs->col.tab[1][17] = 0xFFFF33;
	ft_tabcolorss(fs);
}

void	ft_tabcolor(t_fs *fs)
{
	fs->col.tab[0][0] = 0x330000;
	fs->col.tab[0][1] = 0x333300;
	fs->col.tab[0][2] = 0x336600;
	fs->col.tab[0][3] = 0x339900;
	fs->col.tab[0][4] = 0x33CC00;
	fs->col.tab[0][5] = 0x33FF00;
	fs->col.tab[0][6] = 0x66FF00;
	fs->col.tab[0][7] = 0x66CC00;
	fs->col.tab[0][8] = 0x669900;
	fs->col.tab[0][9] = 0x666600;
	fs->col.tab[0][10] = 0x663300;
	fs->col.tab[0][11] = 0x660000;
	fs->col.tab[0][12] = 0xFF0000;
	fs->col.tab[0][13] = 0xFF3300;
	fs->col.tab[0][14] = 0xFF6600;
	fs->col.tab[0][15] = 0xFF9900;
	fs->col.tab[0][16] = 0xFFCC00;
	fs->col.tab[0][17] = 0xFFFF00;
	ft_tabcolors(fs);
}
