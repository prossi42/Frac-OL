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
	first->col.tab[89] = 0x3300CC;
	first->col.tab[88] = 0x3333CC;
	first->col.tab[87] = 0x3366CC;
	first->col.tab[86] = 0x3399CC;
	first->col.tab[85] = 0x33CCCC;
	first->col.tab[84] = 0x33FFCC;
	first->col.tab[83] = 0x66FFCC;
	first->col.tab[82] = 0x66CCCC;
	first->col.tab[81] = 0x6699CC;
	first->col.tab[80] = 0x6666CC;
	first->col.tab[79] = 0x6633CC;
	first->col.tab[78] = 0x6600CC;
	first->col.tab[77] = 0xFF00CC;
	first->col.tab[76] = 0xFF33CC;
	first->col.tab[75] = 0xFF66CC;
	first->col.tab[74] = 0xFF99CC;
	first->col.tab[73] = 0xFFCCCC;
	first->col.tab[72] = 0xFFFFCC;
	ft_tabcolor_sd(first);
}

void	ft_tabcolorsss(t_first *first)
{
	first->col.tab[71] = 0x330099;
	first->col.tab[70] = 0x333399;
	first->col.tab[69] = 0x336699;
	first->col.tab[68] = 0x339999;
	first->col.tab[67] = 0x33CC99;
	first->col.tab[66] = 0x33FF99;
	first->col.tab[65] = 0x66FF99;
	first->col.tab[64] = 0x66CC99;
	first->col.tab[63] = 0x669999;
	first->col.tab[62] = 0x666699;
	first->col.tab[61] = 0x663399;
	first->col.tab[60] = 0x660099;
	first->col.tab[59] = 0xFF0099;
	first->col.tab[58] = 0xFF3399;
	first->col.tab[57] = 0xFF6699;
	first->col.tab[56] = 0xFF9999;
	first->col.tab[55] = 0xFFCC99;
	first->col.tab[54] = 0xFFFF99;
	ft_tabcolorssss(first);
}

void	ft_tabcolorss(t_first *first)
{
	first->col.tab[53] = 0x330066;
	first->col.tab[52] = 0x333366;
	first->col.tab[51] = 0x336666;
	first->col.tab[50] = 0x339966;
	first->col.tab[49] = 0x33CC66;
	first->col.tab[48] = 0x33FF66;
	first->col.tab[47] = 0x66FF66;
	first->col.tab[46] = 0x66CC66;
	first->col.tab[45] = 0x669966;
	first->col.tab[44] = 0x666666;
	first->col.tab[43] = 0x663366;
	first->col.tab[42] = 0x660066;
	first->col.tab[41] = 0xFF0066;
	first->col.tab[40] = 0xFF3366;
	first->col.tab[39] = 0xFF6666;
	first->col.tab[38] = 0xFF9966;
	first->col.tab[37] = 0xFFCC66;
	first->col.tab[36] = 0xFFFF66;
	ft_tabcolorsss(first);
}

void	ft_tabcolors(t_first *first)
{
	first->col.tab[35] = 0x330033;
	first->col.tab[34] = 0x333333;
	first->col.tab[33] = 0x336633;
	first->col.tab[32] = 0x339933;
	first->col.tab[31] = 0x33CC33;
	first->col.tab[30] = 0x33FF33;
	first->col.tab[29] = 0x66FF33;
	first->col.tab[28] = 0x66CC33;
	first->col.tab[27] = 0x669933;
	first->col.tab[26] = 0x666633;
	first->col.tab[25] = 0x663333;
	first->col.tab[24] = 0x660033;
	first->col.tab[23] = 0xFF0033;
	first->col.tab[22] = 0xFF3333;
	first->col.tab[21] = 0xFF6633;
	first->col.tab[20] = 0xFF9933;
	first->col.tab[19] = 0xFFCC33;
	first->col.tab[18] = 0xFFFF33;
	ft_tabcolorss(first);
}

void	ft_tabcolor(t_first *first)
{
	first->col.tab[17] = 0x330000;
	first->col.tab[16] = 0x333300;
	first->col.tab[15] = 0x336600;
	first->col.tab[14] = 0x339900;
	first->col.tab[13] = 0x33CC00;
	first->col.tab[12] = 0x33FF00;
	first->col.tab[11] = 0x66FF00;
	first->col.tab[10] = 0x66CC00;
	first->col.tab[9] = 0x669900;
	first->col.tab[8] = 0x666600;
	first->col.tab[7] = 0x663300;
	first->col.tab[6] = 0x660000;
	first->col.tab[5] = 0xFF0000;
	first->col.tab[4] = 0xFF3300;
	first->col.tab[3] = 0xFF6600;
	first->col.tab[2] = 0xFF9900;
	first->col.tab[1] = 0xFFCC00;
	first->col.tab[0] = 0xFFFF00;
	ft_tabcolors(first);
}
