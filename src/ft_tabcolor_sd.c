/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcolor_sd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 09:29:11 by prossi            #+#    #+#             */
/*   Updated: 2017/09/13 09:29:14 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void 	ft_tabcolor_sdssss(t_fs *fs)
{
	fs->col.tab[9][0] = 0x000066;
	fs->col.tab[9][1] = 0x003366;
	fs->col.tab[9][2] = 0x006666;
	fs->col.tab[9][3] = 0x009966;
	fs->col.tab[9][4] = 0x00CC66;
	fs->col.tab[9][5] = 0x00FF66;
	fs->col.tab[9][6] = 0x99FF66;
	fs->col.tab[9][7] = 0x99CC66;
	fs->col.tab[9][8] = 0x999966;
	fs->col.tab[9][9] = 0x996666;
	fs->col.tab[9][10] = 0x993366;
	fs->col.tab[9][11] = 0x990066;
	fs->col.tab[9][12] = 0xCC0066;
	fs->col.tab[9][13] = 0xCC3366;
	fs->col.tab[9][14] = 0xCC6666;
	fs->col.tab[9][15] = 0xCC9966;
	fs->col.tab[9][16] = 0xCCCC66;
	fs->col.tab[9][17] = 0xCCFF66;
	ft_tabcolor_td(fs);
}

void	ft_tabcolor_sdsss(t_fs *fs)
{
	fs->col.tab[8][0] = 0x000099;
	fs->col.tab[8][1] = 0x003399;
	fs->col.tab[8][2] = 0x006699;
	fs->col.tab[8][3] = 0x009999;
	fs->col.tab[8][4] = 0x00CC99;
	fs->col.tab[8][5] = 0x00FF99;
	fs->col.tab[8][6] = 0x99FF99;
	fs->col.tab[8][7] = 0x99CC99;
	fs->col.tab[8][8] = 0x999999;
	fs->col.tab[8][9] = 0x996699;
	fs->col.tab[8][10] = 0x993399;
	fs->col.tab[8][11] = 0x990099;
	fs->col.tab[8][12] = 0xCC0099;
	fs->col.tab[8][13] = 0xCC3399;
	fs->col.tab[8][14] = 0xCC6699;
	fs->col.tab[8][15] = 0xCC9999;
	fs->col.tab[8][16] = 0xCCCC99;
	fs->col.tab[8][17] = 0xCCFF99;
	ft_tabcolor_sdssss(fs);
}

void 	ft_tabcolor_sdss(t_fs *fs)
{
	fs->col.tab[7][0] = 0x0000CC;
	fs->col.tab[7][1] = 0x0033CC;
	fs->col.tab[7][2] = 0x0066CC;
	fs->col.tab[7][3] = 0x0099CC;
	fs->col.tab[7][4] = 0x00CCCC;
	fs->col.tab[7][5] = 0x00FFCC;
	fs->col.tab[7][6] = 0x99FFCC;
	fs->col.tab[7][7] = 0x99CCCC;
	fs->col.tab[7][8] = 0x9999CC;
	fs->col.tab[7][9] = 0x9966CC;
	fs->col.tab[7][10] = 0x9933CC;
	fs->col.tab[7][11] = 0x9900CC;
	fs->col.tab[7][12] = 0xCC00CC;
	fs->col.tab[7][13] = 0xCC33CC;
	fs->col.tab[7][14] = 0xCC66CC;
	fs->col.tab[7][15] = 0xCC99CC;
	fs->col.tab[7][16] = 0xCCCCCC;
	fs->col.tab[7][17] = 0xCCFFCC;
	ft_tabcolor_sdsss(fs);
}

void	ft_tabcolor_sds(t_fs *fs)
{
	fs->col.tab[6][0] = 0x0000FF;
	fs->col.tab[6][1] = 0x0033FF;
	fs->col.tab[6][2] = 0x0066FF;
	fs->col.tab[6][3] = 0x0099FF;
	fs->col.tab[6][4] = 0x00CCFF;
	fs->col.tab[6][5] = 0x00FFFF;
	fs->col.tab[6][6] = 0x99FFFF;
	fs->col.tab[6][7] = 0x99CCFF;
	fs->col.tab[6][8] = 0x9999FF;
	fs->col.tab[6][9] = 0x9966FF;
	fs->col.tab[6][10] = 0x9933FF;
	fs->col.tab[6][11] = 0x9900FF;
	fs->col.tab[6][12] = 0xCC00FF;
	fs->col.tab[6][13] = 0xCC33FF;
	fs->col.tab[6][14] = 0xCC66FF;
	fs->col.tab[6][15] = 0xCC99FF;
	fs->col.tab[6][16] = 0xCCCCFF;
	fs->col.tab[6][17] = 0xCCFFFF;
	ft_tabcolor_sdss(fs);
}

void	ft_tabcolor_sd(t_fs *fs)
{
	fs->col.tab[5][0] = 0x3300FF;
	fs->col.tab[5][1] = 0x3333FF;
	fs->col.tab[5][2] = 0x3366FF;
	fs->col.tab[5][3] = 0x3399FF;
	fs->col.tab[5][4] = 0x33CCFF;
	fs->col.tab[5][5] = 0x33FFFF;
	fs->col.tab[5][6] = 0x66FFFF;
	fs->col.tab[5][7] = 0x66CCFF;
	fs->col.tab[5][8] = 0x6699FF;
	fs->col.tab[5][9] = 0x6666FF;
	fs->col.tab[5][10] = 0x6633FF;
	fs->col.tab[5][11] = 0x6600FF;
	fs->col.tab[5][12] = 0xFF00FF;
	fs->col.tab[5][13] = 0xFF33FF;
	fs->col.tab[5][14] = 0xFF66FF;
	fs->col.tab[5][15] = 0xFF99FF;
	fs->col.tab[5][16] = 0xFFCCFF;
	fs->col.tab[5][17] = 0xFFFFFF;
	ft_tabcolor_sds(fs);
}
