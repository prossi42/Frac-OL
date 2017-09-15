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
	fs->col.tab[89] = 0x3300CC;
	fs->col.tab[88] = 0x3333CC;
	fs->col.tab[87] = 0x3366CC;
	fs->col.tab[86] = 0x3399CC;
	fs->col.tab[85] = 0x33CCCC;
	fs->col.tab[84] = 0x33FFCC;
	fs->col.tab[83] = 0x66FFCC;
	fs->col.tab[82] = 0x66CCCC;
	fs->col.tab[81] = 0x6699CC;
	fs->col.tab[80] = 0x6666CC;
	fs->col.tab[79] = 0x6633CC;
	fs->col.tab[78] = 0x6600CC;
	fs->col.tab[77] = 0xFF00CC;
	fs->col.tab[76] = 0xFF33CC;
	fs->col.tab[75] = 0xFF66CC;
	fs->col.tab[74] = 0xFF99CC;
	fs->col.tab[73] = 0xFFCCCC;
	fs->col.tab[72] = 0xFFFFCC;
	ft_tabcolor_sd(fs);
}

void	ft_tabcolorsss(t_fs *fs)
{
	fs->col.tab[71] = 0x330099;
	fs->col.tab[70] = 0x333399;
	fs->col.tab[69] = 0x336699;
	fs->col.tab[68] = 0x339999;
	fs->col.tab[67] = 0x33CC99;
	fs->col.tab[66] = 0x33FF99;
	fs->col.tab[65] = 0x66FF99;
	fs->col.tab[64] = 0x66CC99;
	fs->col.tab[63] = 0x669999;
	fs->col.tab[62] = 0x666699;
	fs->col.tab[61] = 0x663399;
	fs->col.tab[60] = 0x660099;
	fs->col.tab[59] = 0xFF0099;
	fs->col.tab[58] = 0xFF3399;
	fs->col.tab[57] = 0xFF6699;
	fs->col.tab[56] = 0xFF9999;
	fs->col.tab[55] = 0xFFCC99;
	fs->col.tab[54] = 0xFFFF99;
	ft_tabcolorssss(fs);
}

void	ft_tabcolorss(t_fs *fs)
{
	fs->col.tab[53] = 0x330066;
	fs->col.tab[52] = 0x333366;
	fs->col.tab[51] = 0x336666;
	fs->col.tab[50] = 0x339966;
	fs->col.tab[49] = 0x33CC66;
	fs->col.tab[48] = 0x33FF66;
	fs->col.tab[47] = 0x66FF66;
	fs->col.tab[46] = 0x66CC66;
	fs->col.tab[45] = 0x669966;
	fs->col.tab[44] = 0x666666;
	fs->col.tab[43] = 0x663366;
	fs->col.tab[42] = 0x660066;
	fs->col.tab[41] = 0xFF0066;
	fs->col.tab[40] = 0xFF3366;
	fs->col.tab[39] = 0xFF6666;
	fs->col.tab[38] = 0xFF9966;
	fs->col.tab[37] = 0xFFCC66;
	fs->col.tab[36] = 0xFFFF66;
	ft_tabcolorsss(fs);
}

void	ft_tabcolors(t_fs *fs)
{
	fs->col.tab[35] = 0x330033;
	fs->col.tab[34] = 0x333333;
	fs->col.tab[33] = 0x336633;
	fs->col.tab[32] = 0x339933;
	fs->col.tab[31] = 0x33CC33;
	fs->col.tab[30] = 0x33FF33;
	fs->col.tab[29] = 0x66FF33;
	fs->col.tab[28] = 0x66CC33;
	fs->col.tab[27] = 0x669933;
	fs->col.tab[26] = 0x666633;
	fs->col.tab[25] = 0x663333;
	fs->col.tab[24] = 0x660033;
	fs->col.tab[23] = 0xFF0033;
	fs->col.tab[22] = 0xFF3333;
	fs->col.tab[21] = 0xFF6633;
	fs->col.tab[20] = 0xFF9933;
	fs->col.tab[19] = 0xFFCC33;
	fs->col.tab[18] = 0xFFFF33;
	ft_tabcolorss(fs);
}

void	ft_tabcolor(t_fs *fs)
{
	fs->col.tab[17] = 0x330000;
	fs->col.tab[16] = 0x333300;
	fs->col.tab[15] = 0x336600;
	fs->col.tab[14] = 0x339900;
	fs->col.tab[13] = 0x33CC00;
	fs->col.tab[12] = 0x33FF00;
	fs->col.tab[11] = 0x66FF00;
	fs->col.tab[10] = 0x66CC00;
	fs->col.tab[9] = 0x669900;
	fs->col.tab[8] = 0x666600;
	fs->col.tab[7] = 0x663300;
	fs->col.tab[6] = 0x660000;
	fs->col.tab[5] = 0xFF0000;
	fs->col.tab[4] = 0xFF3300;
	fs->col.tab[3] = 0xFF6600;
	fs->col.tab[2] = 0xFF9900;
	fs->col.tab[1] = 0xFFCC00;
	fs->col.tab[0] = 0xFFFF00;
	ft_tabcolors(fs);
}
