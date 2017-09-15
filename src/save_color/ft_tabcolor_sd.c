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
	fs->col.tab[179] = 0x000066;
	fs->col.tab[178] = 0x003366;
	fs->col.tab[177] = 0x006666;
	fs->col.tab[176] = 0x009966;
	fs->col.tab[175] = 0x00CC66;
	fs->col.tab[174] = 0x00FF66;
	fs->col.tab[173] = 0x99FF66;
	fs->col.tab[172] = 0x99CC66;
	fs->col.tab[171] = 0x999966;
	fs->col.tab[170] = 0x996666;
	fs->col.tab[169] = 0x993366;
	fs->col.tab[168] = 0x990066;
	fs->col.tab[167] = 0xCC0066;
	fs->col.tab[166] = 0xCC3366;
	fs->col.tab[165] = 0xCC6666;
	fs->col.tab[164] = 0xCC9966;
	fs->col.tab[163] = 0xCCCC66;
	fs->col.tab[162] = 0xCCFF66;
	ft_tabcolor_td(fs);
}

void	ft_tabcolor_sdsss(t_fs *fs)
{
	fs->col.tab[161] = 0x000099;
	fs->col.tab[160] = 0x003399;
	fs->col.tab[159] = 0x006699;
	fs->col.tab[158] = 0x009999;
	fs->col.tab[157] = 0x00CC99;
	fs->col.tab[156] = 0x00FF99;
	fs->col.tab[155] = 0x99FF99;
	fs->col.tab[154] = 0x99CC99;
	fs->col.tab[153] = 0x999999;
	fs->col.tab[152] = 0x996699;
	fs->col.tab[151] = 0x993399;
	fs->col.tab[150] = 0x990099;
	fs->col.tab[149] = 0xCC0099;
	fs->col.tab[148] = 0xCC3399;
	fs->col.tab[147] = 0xCC6699;
	fs->col.tab[146] = 0xCC9999;
	fs->col.tab[145] = 0xCCCC99;
	fs->col.tab[144] = 0xCCFF99;
	ft_tabcolor_sdssss(fs);
}

void 	ft_tabcolor_sdss(t_fs *fs)
{
	fs->col.tab[143] = 0x0000CC;
	fs->col.tab[142] = 0x0033CC;
	fs->col.tab[141] = 0x0066CC;
	fs->col.tab[140] = 0x0099CC;
	fs->col.tab[139] = 0x00CCCC;
	fs->col.tab[138] = 0x00FFCC;
	fs->col.tab[137] = 0x99FFCC;
	fs->col.tab[136] = 0x99CCCC;
	fs->col.tab[135] = 0x9999CC;
	fs->col.tab[134] = 0x9966CC;
	fs->col.tab[133] = 0x9933CC;
	fs->col.tab[132] = 0x9900CC;
	fs->col.tab[131] = 0xCC00CC;
	fs->col.tab[130] = 0xCC33CC;
	fs->col.tab[129] = 0xCC66CC;
	fs->col.tab[128] = 0xCC99CC;
	fs->col.tab[127] = 0xCCCCCC;
	fs->col.tab[126] = 0xCCFFCC;
	ft_tabcolor_sdsss(fs);
}

void	ft_tabcolor_sds(t_fs *fs)
{
	fs->col.tab[125] = 0x0000FF;
	fs->col.tab[124] = 0x0033FF;
	fs->col.tab[123] = 0x0066FF;
	fs->col.tab[122] = 0x0099FF;
	fs->col.tab[121] = 0x00CCFF;
	fs->col.tab[120] = 0x00FFFF;
	fs->col.tab[119] = 0x99FFFF;
	fs->col.tab[118] = 0x99CCFF;
	fs->col.tab[117] = 0x9999FF;
	fs->col.tab[116] = 0x9966FF;
	fs->col.tab[115] = 0x9933FF;
	fs->col.tab[114] = 0x9900FF;
	fs->col.tab[113] = 0xCC00FF;
	fs->col.tab[112] = 0xCC33FF;
	fs->col.tab[111] = 0xCC66FF;
	fs->col.tab[110] = 0xCC99FF;
	fs->col.tab[109] = 0xCCCCFF;
	fs->col.tab[108] = 0xCCFFFF;
	ft_tabcolor_sdss(fs);
}

void	ft_tabcolor_sd(t_fs *fs)
{
	fs->col.tab[107] = 0x3300FF;
	fs->col.tab[106] = 0x3333FF;
	fs->col.tab[105] = 0x3366FF;
	fs->col.tab[104] = 0x3399FF;
	fs->col.tab[103] = 0x33CCFF;
	fs->col.tab[102] = 0x33FFFF;
	fs->col.tab[101] = 0x66FFFF;
	fs->col.tab[100] = 0x66CCFF;
	fs->col.tab[99] = 0x6699FF;
	fs->col.tab[98] = 0x6666FF;
	fs->col.tab[97] = 0x6633FF;
	fs->col.tab[96] = 0x6600FF;
	fs->col.tab[95] = 0xFF00FF;
	fs->col.tab[94] = 0xFF33FF;
	fs->col.tab[93] = 0xFF66FF;
	fs->col.tab[92] = 0xFF99FF;
	fs->col.tab[91] = 0xFFCCFF;
	fs->col.tab[90] = 0xFFFFFF;
	ft_tabcolor_sds(fs);
}
