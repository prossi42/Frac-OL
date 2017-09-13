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

void 	ft_tabcolor_sdssss(t_first *first)
{
	first->col.tab[9][0] = 0x000066;
	first->col.tab[9][1] = 0x003366;
	first->col.tab[9][2] = 0x006666;
	first->col.tab[9][3] = 0x009966;
	first->col.tab[9][4] = 0x00CC66;
	first->col.tab[9][5] = 0x00FF66;
	first->col.tab[9][6] = 0x99FF66;
	first->col.tab[9][7] = 0x99CC66;
	first->col.tab[9][8] = 0x999966;
	first->col.tab[9][9] = 0x996666;
	first->col.tab[9][10] = 0x993366;
	first->col.tab[9][11] = 0x990066;
	first->col.tab[9][12] = 0xCC0066;
	first->col.tab[9][13] = 0xCC3366;
	first->col.tab[9][14] = 0xCC6666;
	first->col.tab[9][15] = 0xCC9966;
	first->col.tab[9][16] = 0xCCCC66;
	first->col.tab[9][17] = 0xCCFF66;
	ft_tabcolor_td(first);
}

void	ft_tabcolor_sdsss(t_first *first)
{
	first->col.tab[8][0] = 0x000099;
	first->col.tab[8][1] = 0x003399;
	first->col.tab[8][2] = 0x006699;
	first->col.tab[8][3] = 0x009999;
	first->col.tab[8][4] = 0x00CC99;
	first->col.tab[8][5] = 0x00FF99;
	first->col.tab[8][6] = 0x99FF99;
	first->col.tab[8][7] = 0x99CC99;
	first->col.tab[8][8] = 0x999999;
	first->col.tab[8][9] = 0x996699;
	first->col.tab[8][10] = 0x993399;
	first->col.tab[8][11] = 0x990099;
	first->col.tab[8][12] = 0xCC0099;
	first->col.tab[8][13] = 0xCC3399;
	first->col.tab[8][14] = 0xCC6699;
	first->col.tab[8][15] = 0xCC9999;
	first->col.tab[8][16] = 0xCCCC99;
	first->col.tab[8][17] = 0xCCFF99;
	ft_tabcolor_sdssss(first);
}

void 	ft_tabcolor_sdss(t_first *first)
{
	first->col.tab[7][0] = 0x0000CC;
	first->col.tab[7][1] = 0x0033CC;
	first->col.tab[7][2] = 0x0066CC;
	first->col.tab[7][3] = 0x0099CC;
	first->col.tab[7][4] = 0x00CCCC;
	first->col.tab[7][5] = 0x00FFCC;
	first->col.tab[7][6] = 0x99FFCC;
	first->col.tab[7][7] = 0x99CCCC;
	first->col.tab[7][8] = 0x9999CC;
	first->col.tab[7][9] = 0x9966CC;
	first->col.tab[7][10] = 0x9933CC;
	first->col.tab[7][11] = 0x9900CC;
	first->col.tab[7][12] = 0xCC00CC;
	first->col.tab[7][13] = 0xCC33CC;
	first->col.tab[7][14] = 0xCC66CC;
	first->col.tab[7][15] = 0xCC99CC;
	first->col.tab[7][16] = 0xCCCCCC;
	first->col.tab[7][17] = 0xCCFFCC;
	ft_tabcolor_sdsss(first);
}

void	ft_tabcolor_sds(t_first *first)
{
	first->col.tab[6][0] = 0x0000FF;
	first->col.tab[6][1] = 0x0033FF;
	first->col.tab[6][2] = 0x0066FF;
	first->col.tab[6][3] = 0x0099FF;
	first->col.tab[6][4] = 0x00CCFF;
	first->col.tab[6][5] = 0x00FFFF;
	first->col.tab[6][6] = 0x99FFFF;
	first->col.tab[6][7] = 0x99CCFF;
	first->col.tab[6][8] = 0x9999FF;
	first->col.tab[6][9] = 0x9966FF;
	first->col.tab[6][10] = 0x9933FF;
	first->col.tab[6][11] = 0x9900FF;
	first->col.tab[6][12] = 0xCC00FF;
	first->col.tab[6][13] = 0xCC33FF;
	first->col.tab[6][14] = 0xCC66FF;
	first->col.tab[6][15] = 0xCC99FF;
	first->col.tab[6][16] = 0xCCCCFF;
	first->col.tab[6][17] = 0xCCFFFF;
	ft_tabcolor_sdss(first);
}

void	ft_tabcolor_sd(t_first *first)
{
	first->col.tab[5][0] = 0x3300FF;
	first->col.tab[5][1] = 0x3333FF;
	first->col.tab[5][2] = 0x3366FF;
	first->col.tab[5][3] = 0x3399FF;
	first->col.tab[5][4] = 0x33CCFF;
	first->col.tab[5][5] = 0x33FFFF;
	first->col.tab[5][6] = 0x66FFFF;
	first->col.tab[5][7] = 0x66CCFF;
	first->col.tab[5][8] = 0x6699FF;
	first->col.tab[5][9] = 0x6666FF;
	first->col.tab[5][10] = 0x6633FF;
	first->col.tab[5][11] = 0x6600FF;
	first->col.tab[5][12] = 0xFF00FF;
	first->col.tab[5][13] = 0xFF33FF;
	first->col.tab[5][14] = 0xFF66FF;
	first->col.tab[5][15] = 0xFF99FF;
	first->col.tab[5][16] = 0xFFCCFF;
	first->col.tab[5][17] = 0xFFFFFF;
	ft_tabcolor_sds(first);
}
