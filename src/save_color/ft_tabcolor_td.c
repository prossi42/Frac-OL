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
	fs->col.tab[215] = 0x000000;
	fs->col.tab[214] = 0x003300;
	fs->col.tab[213] = 0x006600;
	fs->col.tab[212] = 0x009900;
	fs->col.tab[211] = 0x00CC00;
	fs->col.tab[210] = 0x00FF00;
	fs->col.tab[209] = 0x99FF00;
	fs->col.tab[208] = 0x99CC00;
	fs->col.tab[207] = 0x999900;
	fs->col.tab[206] = 0x996600;
	fs->col.tab[205] = 0x993300;
	fs->col.tab[204] = 0x990000;
	fs->col.tab[203] = 0xCC0000;
	fs->col.tab[202] = 0xCC3300;
	fs->col.tab[201] = 0xCC6600;
	fs->col.tab[200] = 0xCC9900;
	fs->col.tab[199] = 0xCCCC00;
	fs->col.tab[198] = 0xCCFF00;
}

void 	ft_tabcolor_td(t_fs *fs)
{
	fs->col.tab[197] = 0x000033;
	fs->col.tab[196] = 0x003333;
	fs->col.tab[195] = 0x006633;
	fs->col.tab[194] = 0x009933;
	fs->col.tab[193] = 0x00CC33;
	fs->col.tab[192] = 0x00FF33;
	fs->col.tab[191] = 0x99FF33;
	fs->col.tab[190] = 0x99CC66;
	fs->col.tab[189] = 0x999933;
	fs->col.tab[188] = 0x996633;
	fs->col.tab[187] = 0x993333;
	fs->col.tab[186] = 0x990033;
	fs->col.tab[185] = 0xCC0033;
	fs->col.tab[184] = 0xCC3333;
	fs->col.tab[183] = 0xCC6633;
	fs->col.tab[182] = 0xCC9933;
	fs->col.tab[181] = 0xCCCC33;
	fs->col.tab[180] = 0xCCFF33;
	ft_tabcolor_tds(fs);
}
