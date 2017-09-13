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
	first->col.tab[215] = 0x000000;
	first->col.tab[214] = 0x003300;
	first->col.tab[213] = 0x006600;
	first->col.tab[212] = 0x009900;
	first->col.tab[211] = 0x00CC00;
	first->col.tab[210] = 0x00FF00;
	first->col.tab[209] = 0x99FF00;
	first->col.tab[208] = 0x99CC00;
	first->col.tab[207] = 0x999900;
	first->col.tab[206] = 0x996600;
	first->col.tab[205] = 0x993300;
	first->col.tab[204] = 0x990000;
	first->col.tab[203] = 0xCC0000;
	first->col.tab[202] = 0xCC3300;
	first->col.tab[201] = 0xCC6600;
	first->col.tab[200] = 0xCC9900;
	first->col.tab[199] = 0xCCCC00;
	first->col.tab[198] = 0xCCFF00;
}

void 	ft_tabcolor_td(t_first *first)
{
	first->col.tab[197] = 0x000033;
	first->col.tab[196] = 0x003333;
	first->col.tab[195] = 0x006633;
	first->col.tab[194] = 0x009933;
	first->col.tab[193] = 0x00CC33;
	first->col.tab[192] = 0x00FF33;
	first->col.tab[191] = 0x99FF33;
	first->col.tab[190] = 0x99CC66;
	first->col.tab[189] = 0x999933;
	first->col.tab[188] = 0x996633;
	first->col.tab[187] = 0x993333;
	first->col.tab[186] = 0x990033;
	first->col.tab[185] = 0xCC0033;
	first->col.tab[184] = 0xCC3333;
	first->col.tab[183] = 0xCC6633;
	first->col.tab[182] = 0xCC9933;
	first->col.tab[181] = 0xCCCC33;
	first->col.tab[180] = 0xCCFF33;
	ft_tabcolor_tds(first);
}
