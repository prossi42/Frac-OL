/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcolor_td.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 10:04:39 by prossi            #+#    #+#             */
/*   Updated: 2017/09/13 10:04:41 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	ft_tabcolor_tds(t_fs *fs)
{
	fs->col.tab[11][0] = 0x000000;
	fs->col.tab[11][1] = 0x003300;
	fs->col.tab[11][2] = 0x006600;
	fs->col.tab[11][3] = 0x009900;
	fs->col.tab[11][4] = 0x00CC00;
	fs->col.tab[11][5] = 0x00FF00;
	fs->col.tab[11][6] = 0x99FF00;
	fs->col.tab[11][7] = 0x99CC00;
	fs->col.tab[11][8] = 0x999900;
	fs->col.tab[11][9] = 0x996600;
	fs->col.tab[11][10] = 0x993300;
	fs->col.tab[11][11]= 0x990000;
	fs->col.tab[11][12] = 0xCC0000;
	fs->col.tab[11][13] = 0xCC3300;
	fs->col.tab[11][14] = 0xCC6600;
	fs->col.tab[11][15] = 0xCC9900;
	fs->col.tab[11][16] = 0xCCCC00;
	fs->col.tab[11][17] = 0xCCFF00;
}

void 	ft_tabcolor_td(t_fs *fs)
{
	fs->col.tab[10][0] = 0x000033;
	fs->col.tab[10][1] = 0x003333;
	fs->col.tab[10][2] = 0x006633;
	fs->col.tab[10][3] = 0x009933;
	fs->col.tab[10][4] = 0x00CC33;
	fs->col.tab[10][5] = 0x00FF33;
	fs->col.tab[10][6] = 0x99FF33;
	fs->col.tab[10][7] = 0x99CC66;
	fs->col.tab[10][8] = 0x999933;
	fs->col.tab[10][9] = 0x996633;
	fs->col.tab[10][10] = 0x993333;
	fs->col.tab[10][11] = 0x990033;
	fs->col.tab[10][12] = 0xCC0033;
	fs->col.tab[10][13] = 0xCC3333;
	fs->col.tab[10][14] = 0xCC6633;
	fs->col.tab[10][15] = 0xCC9933;
	fs->col.tab[10][16] = 0xCCCC33;
	fs->col.tab[10][17] = 0xCCFF33;
	ft_tabcolor_tds(fs);
}
