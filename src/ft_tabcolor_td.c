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

void	ft_tabcolor_tds(t_first *first)
{
	first->col.tab[11][0] = 0x000000;
	first->col.tab[11][1] = 0x003300;
	first->col.tab[11][2] = 0x006600;
	first->col.tab[11][3] = 0x009900;
	first->col.tab[11][4] = 0x00CC00;
	first->col.tab[11][5] = 0x00FF00;
	first->col.tab[11][6] = 0x99FF00;
	first->col.tab[11][7] = 0x99CC00;
	first->col.tab[11][8] = 0x999900;
	first->col.tab[11][9] = 0x996600;
	first->col.tab[11][10] = 0x993300;
	first->col.tab[11][11]= 0x990000;
	first->col.tab[11][12] = 0xCC0000;
	first->col.tab[11][13] = 0xCC3300;
	first->col.tab[11][14] = 0xCC6600;
	first->col.tab[11][15] = 0xCC9900;
	first->col.tab[11][16] = 0xCCCC00;
	first->col.tab[11][17] = 0xCCFF00;
}

void 	ft_tabcolor_td(t_first *first)
{
	first->col.tab[10][0] = 0x000033;
	first->col.tab[10][1] = 0x003333;
	first->col.tab[10][2] = 0x006633;
	first->col.tab[10][3] = 0x009933;
	first->col.tab[10][4] = 0x00CC33;
	first->col.tab[10][5] = 0x00FF33;
	first->col.tab[10][6] = 0x99FF33;
	first->col.tab[10][7] = 0x99CC66;
	first->col.tab[10][8] = 0x999933;
	first->col.tab[10][9] = 0x996633;
	first->col.tab[10][10] = 0x993333;
	first->col.tab[10][11] = 0x990033;
	first->col.tab[10][12] = 0xCC0033;
	first->col.tab[10][13] = 0xCC3333;
	first->col.tab[10][14] = 0xCC6633;
	first->col.tab[10][15] = 0xCC9933;
	first->col.tab[10][16] = 0xCCCC33;
	first->col.tab[10][17] = 0xCCFF33;
	ft_tabcolor_tds(first);
}
