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
	first->col.tab[179] = 0x000066;
	first->col.tab[178] = 0x003366;
	first->col.tab[177] = 0x006666;
	first->col.tab[176] = 0x009966;
	first->col.tab[175] = 0x00CC66;
	first->col.tab[174] = 0x00FF66;
	first->col.tab[173] = 0x99FF66;
	first->col.tab[172] = 0x99CC66;
	first->col.tab[171] = 0x999966;
	first->col.tab[170] = 0x996666;
	first->col.tab[169] = 0x993366;
	first->col.tab[168] = 0x990066;
	first->col.tab[167] = 0xCC0066;
	first->col.tab[166] = 0xCC3366;
	first->col.tab[165] = 0xCC6666;
	first->col.tab[164] = 0xCC9966;
	first->col.tab[163] = 0xCCCC66;
	first->col.tab[162] = 0xCCFF66;
	ft_tabcolor_td(first);
}

void	ft_tabcolor_sdsss(t_first *first)
{
	first->col.tab[161] = 0x000099;
	first->col.tab[160] = 0x003399;
	first->col.tab[159] = 0x006699;
	first->col.tab[158] = 0x009999;
	first->col.tab[157] = 0x00CC99;
	first->col.tab[156] = 0x00FF99;
	first->col.tab[155] = 0x99FF99;
	first->col.tab[154] = 0x99CC99;
	first->col.tab[153] = 0x999999;
	first->col.tab[152] = 0x996699;
	first->col.tab[151] = 0x993399;
	first->col.tab[150] = 0x990099;
	first->col.tab[149] = 0xCC0099;
	first->col.tab[148] = 0xCC3399;
	first->col.tab[147] = 0xCC6699;
	first->col.tab[146] = 0xCC9999;
	first->col.tab[145] = 0xCCCC99;
	first->col.tab[144] = 0xCCFF99;
	ft_tabcolor_sdssss(first);
}

void 	ft_tabcolor_sdss(t_first *first)
{
	first->col.tab[143] = 0x0000CC;
	first->col.tab[142] = 0x0033CC;
	first->col.tab[141] = 0x0066CC;
	first->col.tab[140] = 0x0099CC;
	first->col.tab[139] = 0x00CCCC;
	first->col.tab[138] = 0x00FFCC;
	first->col.tab[137] = 0x99FFCC;
	first->col.tab[136] = 0x99CCCC;
	first->col.tab[135] = 0x9999CC;
	first->col.tab[134] = 0x9966CC;
	first->col.tab[133] = 0x9933CC;
	first->col.tab[132] = 0x9900CC;
	first->col.tab[131] = 0xCC00CC;
	first->col.tab[130] = 0xCC33CC;
	first->col.tab[129] = 0xCC66CC;
	first->col.tab[128] = 0xCC99CC;
	first->col.tab[127] = 0xCCCCCC;
	first->col.tab[126] = 0xCCFFCC;
	ft_tabcolor_sdsss(first);
}

void	ft_tabcolor_sds(t_first *first)
{
	first->col.tab[125] = 0x0000FF;
	first->col.tab[124] = 0x0033FF;
	first->col.tab[123] = 0x0066FF;
	first->col.tab[122] = 0x0099FF;
	first->col.tab[121] = 0x00CCFF;
	first->col.tab[120] = 0x00FFFF;
	first->col.tab[119] = 0x99FFFF;
	first->col.tab[118] = 0x99CCFF;
	first->col.tab[117] = 0x9999FF;
	first->col.tab[116] = 0x9966FF;
	first->col.tab[115] = 0x9933FF;
	first->col.tab[114] = 0x9900FF;
	first->col.tab[113] = 0xCC00FF;
	first->col.tab[112] = 0xCC33FF;
	first->col.tab[111] = 0xCC66FF;
	first->col.tab[110] = 0xCC99FF;
	first->col.tab[109] = 0xCCCCFF;
	first->col.tab[108] = 0xCCFFFF;
	ft_tabcolor_sdss(first);
}

void	ft_tabcolor_sd(t_first *first)
{
	first->col.tab[107] = 0x3300FF;
	first->col.tab[106] = 0x3333FF;
	first->col.tab[105] = 0x3366FF;
	first->col.tab[104] = 0x3399FF;
	first->col.tab[103] = 0x33CCFF;
	first->col.tab[102] = 0x33FFFF;
	first->col.tab[101] = 0x66FFFF;
	first->col.tab[100] = 0x66CCFF;
	first->col.tab[99] = 0x6699FF;
	first->col.tab[98] = 0x6666FF;
	first->col.tab[97] = 0x6633FF;
	first->col.tab[96] = 0x6600FF;
	first->col.tab[95] = 0xFF00FF;
	first->col.tab[94] = 0xFF33FF;
	first->col.tab[93] = 0xFF66FF;
	first->col.tab[92] = 0xFF99FF;
	first->col.tab[91] = 0xFFCCFF;
	first->col.tab[90] = 0xFFFFFF;
	ft_tabcolor_sds(first);
}
