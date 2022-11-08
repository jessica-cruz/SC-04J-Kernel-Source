/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_2P6_SET_B_H
#define FIMC_IS_CIS_2P6_SET_B_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-2p6.h"

/* This setfile B is PDAF setting */
/* Reference : S5K2P6SX_EVT0_Ver_0.12_20171026.xlsx */

/* 1. 4608 x 3456 / No-Bin, 4:3, 30fps / Support PDAF Tail, EXTCLK 26Mhz */
const u32 sensor_2p6_setfile_B_4608x3456_30fps[] = {
	/*Globel Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x0100, 0x0000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0xF43A, 0x000C, 0x02,
	0xF470, 0x000D, 0x02,
	0x602A, 0x1C50, 0x02,
	0x6F12, 0x15FF, 0x02,
	0x3092, 0x0000, 0x02,
	0x3088, 0x0101, 0x02,
	0x602A, 0x13CE, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x196C, 0x02,
	0x6F12, 0x8010, 0x02,
	0x31D2, 0x0220, 0x02,
	0x602A, 0x195E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x3816, 0x0140, 0x02,
	0x3818, 0x0140, 0x02,
	0x3854, 0x0008, 0x02,
	0x3856, 0x0008, 0x02,
	0x3858, 0x0008, 0x02,
	0x385A, 0x0008, 0x02,
	0xF440, 0x002F, 0x02,
	0x319C, 0x0130, 0x02,
	0x602A, 0x1266, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x30D4, 0x0001, 0x02,
	0x30D6, 0x002B, 0x02,
	0xB138, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x030C, 0x0004, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0204, 0x0080, 0x02,
	0x37C0, 0x0002, 0x02,
	0x37C2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x304C, 0x0000, 0x02,
	0x3AC4, 0x0100, 0x02,
	0x3E04, 0x0100, 0x02,
	0x3B02, 0x000F, 0x02,
	0x3B34, 0x0000, 0x02,
	0x3AD0, 0x0066, 0x02,
	0x3B0C, 0x0000, 0x02,
	0x3B3E, 0x001E, 0x02,
	0x3ADA, 0x0085, 0x02,
	0x3B16, 0x000F, 0x02,
	0x3B48, 0x0046, 0x02,
	0x3AE4, 0x00AD, 0x02,
	0x3B20, 0xFFE2, 0x02,
	0x3B52, 0x0000, 0x02,
	0x3AEE, 0x0085, 0x02,
	0x3E0E, 0x0FEF, 0x02,
	0x3E18, 0x1010, 0x02,
	0x3E22, 0x1018, 0x02,
	0x6214, 0x7970, 0x02,
	/*Size Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x30CE, 0x0000, 0x02,
	0x37F6, 0x0021, 0x02,
	0x3198, 0x0007, 0x02,
	0x319A, 0x0100, 0x02,
	0x3056, 0x0000, 0x02,
	0x602A, 0x1BB0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0B0E, 0x0100, 0x02,
	0x30D8, 0x0100, 0x02,
	0x31B0, 0x0008, 0x02,
	0x0340, 0x0E1A, 0x02,
	0x0342, 0x1428, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D8F, 0x02,
	0x034C, 0x1200, 0x02,
	0x034E, 0x0D80, 0x02,
	0x0900, 0x0011, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0000, 0x02,
	0x0306, 0x0061, 0x02,
	0x1130, 0x440E, 0x02,
	0x030E, 0x006F, 0x02,
	0x0202, 0x0E10, 0x02,
	0x021E, 0x0E10, 0x02,
	0x0216, 0x0000, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 2. 4608 x 2624 / No-Bin, 16:9, 30fps / Support PDAF Tail , EXTCLK 26Mhz */
const u32 sensor_2p6_setfile_B_4608x2624_30fps[] = {
	/*Globel Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x0100, 0x0000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0xF43A, 0x000C, 0x02,
	0xF470, 0x000D, 0x02,
	0x602A, 0x1C50, 0x02,
	0x6F12, 0x15FF, 0x02,
	0x3092, 0x0000, 0x02,
	0x3088, 0x0101, 0x02,
	0x602A, 0x13CE, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x196C, 0x02,
	0x6F12, 0x8010, 0x02,
	0x31D2, 0x0220, 0x02,
	0x602A, 0x195E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x3816, 0x0140, 0x02,
	0x3818, 0x0140, 0x02,
	0x3854, 0x0008, 0x02,
	0x3856, 0x0008, 0x02,
	0x3858, 0x0008, 0x02,
	0x385A, 0x0008, 0x02,
	0xF440, 0x002F, 0x02,
	0x319C, 0x0130, 0x02,
	0x602A, 0x1266, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x30D4, 0x0001, 0x02,
	0x30D6, 0x002B, 0x02,
	0xB138, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x030C, 0x0004, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0204, 0x0080, 0x02,
	0x37C0, 0x0002, 0x02,
	0x37C2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x304C, 0x0000, 0x02,
	0x3AC4, 0x0100, 0x02,
	0x3E04, 0x0100, 0x02,
	0x3B02, 0x000F, 0x02,
	0x3B34, 0x0000, 0x02,
	0x3AD0, 0x0066, 0x02,
	0x3B0C, 0x0000, 0x02,
	0x3B3E, 0x001E, 0x02,
	0x3ADA, 0x0085, 0x02,
	0x3B16, 0x000F, 0x02,
	0x3B48, 0x0046, 0x02,
	0x3AE4, 0x00AD, 0x02,
	0x3B20, 0xFFE2, 0x02,
	0x3B52, 0x0000, 0x02,
	0x3AEE, 0x0085, 0x02,
	0x3E0E, 0x0FEF, 0x02,
	0x3E18, 0x1010, 0x02,
	0x3E22, 0x1018, 0x02,
	0x6214, 0x7970, 0x02,
	/*Size Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x30CE, 0x0000, 0x02,
	0x37F6, 0x0021, 0x02,
	0x3198, 0x0007, 0x02,
	0x319A, 0x0100, 0x02,
	0x3056, 0x0000, 0x02,
	0x602A, 0x1BB0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0B0E, 0x0100, 0x02,
	0x30D8, 0x0100, 0x02,
	0x31B0, 0x0008, 0x02,
	0x0340, 0x0E1A, 0x02,
	0x0342, 0x1428, 0x02,
	0x0346, 0x01B0, 0x02,
	0x034A, 0x0BEF, 0x02,
	0x034C, 0x1200, 0x02,
	0x034E, 0x0A40, 0x02,
	0x0900, 0x0011, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0000, 0x02,
	0x0306, 0x0061, 0x02,
	0x1130, 0x440E, 0x02,
	0x030E, 0x006F, 0x02,
	0x0202, 0x0E10, 0x02,
	0x021E, 0x0E10, 0x02,
	0x0216, 0x0000, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 3. 4608 x 2240 / No-Bin, 18.5:9, 30fps / Support PDAF Tail  , EXTCLK 26Mhz */
const u32 sensor_2p6_setfile_B_4608x2240_30fps[] = {
	/*Globel Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x0100, 0x0000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0xF43A, 0x000C, 0x02,
	0xF470, 0x000D, 0x02,
	0x602A, 0x1C50, 0x02,
	0x6F12, 0x15FF, 0x02,
	0x3092, 0x0000, 0x02,
	0x3088, 0x0101, 0x02,
	0x602A, 0x13CE, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x196C, 0x02,
	0x6F12, 0x8010, 0x02,
	0x31D2, 0x0220, 0x02,
	0x602A, 0x195E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x3816, 0x0140, 0x02,
	0x3818, 0x0140, 0x02,
	0x3854, 0x0008, 0x02,
	0x3856, 0x0008, 0x02,
	0x3858, 0x0008, 0x02,
	0x385A, 0x0008, 0x02,
	0xF440, 0x002F, 0x02,
	0x319C, 0x0130, 0x02,
	0x602A, 0x1266, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x30D4, 0x0001, 0x02,
	0x30D6, 0x002B, 0x02,
	0xB138, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x030C, 0x0004, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0204, 0x0080, 0x02,
	0x37C0, 0x0002, 0x02,
	0x37C2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x304C, 0x0000, 0x02,
	0x3AC4, 0x0100, 0x02,
	0x3E04, 0x0100, 0x02,
	0x3B02, 0x000F, 0x02,
	0x3B34, 0x0000, 0x02,
	0x3AD0, 0x0066, 0x02,
	0x3B0C, 0x0000, 0x02,
	0x3B3E, 0x001E, 0x02,
	0x3ADA, 0x0085, 0x02,
	0x3B16, 0x000F, 0x02,
	0x3B48, 0x0046, 0x02,
	0x3AE4, 0x00AD, 0x02,
	0x3B20, 0xFFE2, 0x02,
	0x3B52, 0x0000, 0x02,
	0x3AEE, 0x0085, 0x02,
	0x3E0E, 0x0FEF, 0x02,
	0x3E18, 0x1010, 0x02,
	0x3E22, 0x1018, 0x02,
	0x6214, 0x7970, 0x02,
	/*Size Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x30CE, 0x0000, 0x02,
	0x37F6, 0x0021, 0x02,
	0x3198, 0x0007, 0x02,
	0x319A, 0x0100, 0x02,
	0x3056, 0x0000, 0x02,
	0x602A, 0x1BB0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0B0E, 0x0100, 0x02,
	0x30D8, 0x0100, 0x02,
	0x31B0, 0x0008, 0x02,
	0x0340, 0x0E1A, 0x02,
	0x0342, 0x1428, 0x02,
	0x0346, 0x0270, 0x02,
	0x034A, 0x0B2F, 0x02,
	0x034C, 0x1200, 0x02,
	0x034E, 0x08C0, 0x02,
	0x0900, 0x0011, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0000, 0x02,
	0x0306, 0x0061, 0x02,
	0x1130, 0x440E, 0x02,
	0x030E, 0x006F, 0x02,
	0x0202, 0x0E10, 0x02,
	0x021E, 0x0E10, 0x02,
	0x0216, 0x0000, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 4. 2304 x 1728 / 2-Bin, 4:3, 30fps / Support PDAF Tail, EXTCLK 26Mhz */
const u32 sensor_2p6_setfile_B_2304x1728_30fps[] = {
	/*Globel Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x0100, 0x0000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0xF43A, 0x000C, 0x02,
	0xF470, 0x000D, 0x02,
	0x602A, 0x1C50, 0x02,
	0x6F12, 0x15FF, 0x02,
	0x3092, 0x0000, 0x02,
	0x3088, 0x0101, 0x02,
	0x602A, 0x13CE, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x196C, 0x02,
	0x6F12, 0x8010, 0x02,
	0x31D2, 0x0220, 0x02,
	0x602A, 0x195E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x3816, 0x0140, 0x02,
	0x3818, 0x0140, 0x02,
	0x3854, 0x0008, 0x02,
	0x3856, 0x0008, 0x02,
	0x3858, 0x0008, 0x02,
	0x385A, 0x0008, 0x02,
	0xF440, 0x002F, 0x02,
	0x319C, 0x0130, 0x02,
	0x602A, 0x1266, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x30D4, 0x0001, 0x02,
	0x30D6, 0x002B, 0x02,
	0xB138, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x030C, 0x0004, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0204, 0x0080, 0x02,
	0x37C0, 0x0002, 0x02,
	0x37C2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x304C, 0x0000, 0x02,
	0x3AC4, 0x0100, 0x02,
	0x3E04, 0x0100, 0x02,
	0x3B02, 0x000F, 0x02,
	0x3B34, 0x0000, 0x02,
	0x3AD0, 0x0066, 0x02,
	0x3B0C, 0x0000, 0x02,
	0x3B3E, 0x001E, 0x02,
	0x3ADA, 0x0085, 0x02,
	0x3B16, 0x000F, 0x02,
	0x3B48, 0x0046, 0x02,
	0x3AE4, 0x00AD, 0x02,
	0x3B20, 0xFFE2, 0x02,
	0x3B52, 0x0000, 0x02,
	0x3AEE, 0x0085, 0x02,
	0x3E0E, 0x0FEF, 0x02,
	0x3E18, 0x1010, 0x02,
	0x3E22, 0x1018, 0x02,
	0x6214, 0x7970, 0x02,
	/*Size Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x30CE, 0x0040, 0x02,
	0x37F6, 0x0031, 0x02,
	0x3198, 0x0066, 0x02,
	0x319A, 0x0000, 0x02,
	0x3056, 0x0000, 0x02,
	0x602A, 0x1BB0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0B0E, 0x0100, 0x02,
	0x30D8, 0x0100, 0x02,
	0x31B0, 0x0004, 0x02,
	0x0340, 0x0E1A, 0x02,
	0x0342, 0x1428, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D8f, 0x02,
	0x034C, 0x0900, 0x02,
	0x034E, 0x06C0, 0x02,
	0x0900, 0x0112, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	0x0306, 0x0061, 0x02,
	0x1130, 0x440E, 0x02,
	0x030E, 0x0068, 0x02,
	0x0202, 0x0E10, 0x02,
	0x021E, 0x0E10, 0x02,
	0x0216, 0x0000, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 5. 2304 x 1728 / 2-Bin, 4:3, 15fps / Support PDAF Tail, EXTCLK 26Mhz */
const u32 sensor_2p6_setfile_B_2304x1728_15fps[] = {
	/*Globel Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x0100, 0x0000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0xF43A, 0x000C, 0x02,
	0xF470, 0x000D, 0x02,
	0x602A, 0x1C50, 0x02,
	0x6F12, 0x15FF, 0x02,
	0x3092, 0x0000, 0x02,
	0x3088, 0x0101, 0x02,
	0x602A, 0x13CE, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x196C, 0x02,
	0x6F12, 0x8010, 0x02,
	0x31D2, 0x0220, 0x02,
	0x602A, 0x195E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x3816, 0x0140, 0x02,
	0x3818, 0x0140, 0x02,
	0x3854, 0x0008, 0x02,
	0x3856, 0x0008, 0x02,
	0x3858, 0x0008, 0x02,
	0x385A, 0x0008, 0x02,
	0xF440, 0x002F, 0x02,
	0x319C, 0x0130, 0x02,
	0x602A, 0x1266, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x30D4, 0x0001, 0x02,
	0x30D6, 0x002B, 0x02,
	0xB138, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x030C, 0x0004, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0204, 0x0080, 0x02,
	0x37C0, 0x0002, 0x02,
	0x37C2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x304C, 0x0000, 0x02,
	0x3AC4, 0x0100, 0x02,
	0x3E04, 0x0100, 0x02,
	0x3B02, 0x000F, 0x02,
	0x3B34, 0x0000, 0x02,
	0x3AD0, 0x0066, 0x02,
	0x3B0C, 0x0000, 0x02,
	0x3B3E, 0x001E, 0x02,
	0x3ADA, 0x0085, 0x02,
	0x3B16, 0x000F, 0x02,
	0x3B48, 0x0046, 0x02,
	0x3AE4, 0x00AD, 0x02,
	0x3B20, 0xFFE2, 0x02,
	0x3B52, 0x0000, 0x02,
	0x3AEE, 0x0085, 0x02,
	0x3E0E, 0x0FEF, 0x02,
	0x3E18, 0x1010, 0x02,
	0x3E22, 0x1018, 0x02,
	0x6214, 0x7970, 0x02,
	/*Size Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x30CE, 0x0040, 0x02,
	0x37F6, 0x0031, 0x02,
	0x3198, 0x0066, 0x02,
	0x319A, 0x0000, 0x02,
	0x3056, 0x0000, 0x02,
	0x602A, 0x1BB0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0B0E, 0x0100, 0x02,
	0x30D8, 0x0100, 0x02,
	0x31B0, 0x0004, 0x02,
	0x0340, 0x1C34, 0x02,
	0x0342, 0x1428, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D8f, 0x02,
	0x034C, 0x0900, 0x02,
	0x034E, 0x06C0, 0x02,
	0x0900, 0x0112, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	0x0306, 0x0061, 0x02,
	0x1130, 0x440E, 0x02,
	0x030E, 0x0068, 0x02,
	0x0202, 0x1C2A, 0x02,
	0x021E, 0x1C2A, 0x02,
	0x0216, 0x0000, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 6. 2304 x 1312 / 2-Bin, 16:9, 30fps / Support Tail Mode, EXTCLK 26Mhz */
const u32 sensor_2p6_setfile_B_2304x1312_30fps[] = {
	/*Globel Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x0100, 0x0000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0xF43A, 0x000C, 0x02,
	0xF470, 0x000D, 0x02,
	0x602A, 0x1C50, 0x02,
	0x6F12, 0x15FF, 0x02,
	0x3092, 0x0000, 0x02,
	0x3088, 0x0101, 0x02,
	0x602A, 0x13CE, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x196C, 0x02,
	0x6F12, 0x8010, 0x02,
	0x31D2, 0x0220, 0x02,
	0x602A, 0x195E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x3816, 0x0140, 0x02,
	0x3818, 0x0140, 0x02,
	0x3854, 0x0008, 0x02,
	0x3856, 0x0008, 0x02,
	0x3858, 0x0008, 0x02,
	0x385A, 0x0008, 0x02,
	0xF440, 0x002F, 0x02,
	0x319C, 0x0130, 0x02,
	0x602A, 0x1266, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x30D4, 0x0001, 0x02,
	0x30D6, 0x002B, 0x02,
	0xB138, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x030C, 0x0004, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0204, 0x0080, 0x02,
	0x37C0, 0x0002, 0x02,
	0x37C2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x304C, 0x0000, 0x02,
	0x3AC4, 0x0100, 0x02,
	0x3E04, 0x0100, 0x02,
	0x3B02, 0x000F, 0x02,
	0x3B34, 0x0000, 0x02,
	0x3AD0, 0x0066, 0x02,
	0x3B0C, 0x0000, 0x02,
	0x3B3E, 0x001E, 0x02,
	0x3ADA, 0x0085, 0x02,
	0x3B16, 0x000F, 0x02,
	0x3B48, 0x0046, 0x02,
	0x3AE4, 0x00AD, 0x02,
	0x3B20, 0xFFE2, 0x02,
	0x3B52, 0x0000, 0x02,
	0x3AEE, 0x0085, 0x02,
	0x3E0E, 0x0FEF, 0x02,
	0x3E18, 0x1010, 0x02,
	0x3E22, 0x1018, 0x02,
	0x6214, 0x7970, 0x02,
	/*Size Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x30CE, 0x0040, 0x02,
	0x37F6, 0x0031, 0x02,
	0x3198, 0x0066, 0x02,
	0x319A, 0x0000, 0x02,
	0x3056, 0x0000, 0x02,
	0x602A, 0x1BB0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0B0E, 0x0100, 0x02,
	0x30D8, 0x0100, 0x02,
	0x31B0, 0x0004, 0x02,
	0x0340, 0x0AAA, 0x02,
	0x0342, 0x1AA8, 0x02,
	0x0346, 0x01B0, 0x02,
	0x034A, 0x0BEF, 0x02,
	0x034C, 0x0900, 0x02,
	0x034E, 0x0520, 0x02,
	0x0900, 0x0112, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	0x0306, 0x0061, 0x02,
	0x1130, 0x440E, 0x02,
	0x030E, 0x0068, 0x02,
	0x0202, 0x0E10, 0x02,
	0x021E, 0x0E10, 0x02,
	0x0216, 0x0000, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 7. 2304 x 1120 / 2-Bin, 18.5:9, 30fps / Support PDAF Tail , EXTCLK 26Mhz */
const u32 sensor_2p6_setfile_B_2304x1120_30fps[] = {
	/*Globel Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x0100, 0x0000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0xF43A, 0x000C, 0x02,
	0xF470, 0x000D, 0x02,
	0x602A, 0x1C50, 0x02,
	0x6F12, 0x15FF, 0x02,
	0x3092, 0x0000, 0x02,
	0x3088, 0x0101, 0x02,
	0x602A, 0x13CE, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x196C, 0x02,
	0x6F12, 0x8010, 0x02,
	0x31D2, 0x0220, 0x02,
	0x602A, 0x195E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x3816, 0x0140, 0x02,
	0x3818, 0x0140, 0x02,
	0x3854, 0x0008, 0x02,
	0x3856, 0x0008, 0x02,
	0x3858, 0x0008, 0x02,
	0x385A, 0x0008, 0x02,
	0xF440, 0x002F, 0x02,
	0x319C, 0x0130, 0x02,
	0x602A, 0x1266, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x30D4, 0x0001, 0x02,
	0x30D6, 0x002B, 0x02,
	0xB138, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x030C, 0x0004, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0204, 0x0080, 0x02,
	0x37C0, 0x0002, 0x02,
	0x37C2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x304C, 0x0000, 0x02,
	0x3AC4, 0x0100, 0x02,
	0x3E04, 0x0100, 0x02,
	0x3B02, 0x000F, 0x02,
	0x3B34, 0x0000, 0x02,
	0x3AD0, 0x0066, 0x02,
	0x3B0C, 0x0000, 0x02,
	0x3B3E, 0x001E, 0x02,
	0x3ADA, 0x0085, 0x02,
	0x3B16, 0x000F, 0x02,
	0x3B48, 0x0046, 0x02,
	0x3AE4, 0x00AD, 0x02,
	0x3B20, 0xFFE2, 0x02,
	0x3B52, 0x0000, 0x02,
	0x3AEE, 0x0085, 0x02,
	0x3E0E, 0x0FEF, 0x02,
	0x3E18, 0x1010, 0x02,
	0x3E22, 0x1018, 0x02,
	0x6214, 0x7970, 0x02,
	/*Size Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x30CE, 0x0040, 0x02,
	0x37F6, 0x0031, 0x02,
	0x3198, 0x0066, 0x02,
	0x319A, 0x0000, 0x02,
	0x3056, 0x0000, 0x02,
	0x602A, 0x1BB0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0B0E, 0x0100, 0x02,
	0x30D8, 0x0100, 0x02,
	0x31B0, 0x0004, 0x02,
	0x0340, 0x0937, 0x02,
	0x0342, 0x1ED8, 0x02,
	0x0346, 0x0270, 0x02,
	0x034A, 0x0B2F, 0x02,
	0x034C, 0x0900, 0x02,
	0x034E, 0x0460, 0x02,
	0x0900, 0x0112, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0020, 0x02,
	0x0306, 0x0061, 0x02,
	0x1130, 0x440E, 0x02,
	0x030E, 0x0068, 0x02,
	0x0202, 0x0E10, 0x02,
	0x021E, 0x0E10, 0x02,
	0x0216, 0x0000, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 8. 1152 x 864 / 4-Bin, 4:3, 120fps, EXTCLK 26Mhz */
const u32 sensor_2p6_setfile_B_1152x864_120fps[] = {
	/*Globel Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x0100, 0x0000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0xF43A, 0x000C, 0x02,
	0xF470, 0x000D, 0x02,
	0x602A, 0x1C50, 0x02,
	0x6F12, 0x15FF, 0x02,
	0x3092, 0x0000, 0x02,
	0x3088, 0x0101, 0x02,
	0x602A, 0x13CE, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x196C, 0x02,
	0x6F12, 0x8010, 0x02,
	0x31D2, 0x0220, 0x02,
	0x602A, 0x195E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x3816, 0x0140, 0x02,
	0x3818, 0x0140, 0x02,
	0x3854, 0x0008, 0x02,
	0x3856, 0x0008, 0x02,
	0x3858, 0x0008, 0x02,
	0x385A, 0x0008, 0x02,
	0xF440, 0x002F, 0x02,
	0x319C, 0x0130, 0x02,
	0x602A, 0x1266, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x30D4, 0x0001, 0x02,
	0x30D6, 0x002B, 0x02,
	0xB138, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x030C, 0x0004, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0204, 0x0080, 0x02,
	0x37C0, 0x0002, 0x02,
	0x37C2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x304C, 0x0000, 0x02,
	0x3AC4, 0x0100, 0x02,
	0x3E04, 0x0100, 0x02,
	0x3B02, 0x000F, 0x02,
	0x3B34, 0x0000, 0x02,
	0x3AD0, 0x0066, 0x02,
	0x3B0C, 0x0000, 0x02,
	0x3B3E, 0x001E, 0x02,
	0x3ADA, 0x0085, 0x02,
	0x3B16, 0x000F, 0x02,
	0x3B48, 0x0046, 0x02,
	0x3AE4, 0x00AD, 0x02,
	0x3B20, 0xFFE2, 0x02,
	0x3B52, 0x0000, 0x02,
	0x3AEE, 0x0085, 0x02,
	0x3E0E, 0x0FEF, 0x02,
	0x3E18, 0x1010, 0x02,
	0x3E22, 0x1018, 0x02,
	0x6214, 0x7970, 0x02,
	/*Size Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x30CE, 0x0040, 0x02,
	0x37F6, 0x0001, 0x02,
	0x3198, 0x00CC, 0x02,
	0x319A, 0x0000, 0x02,
	0x3056, 0x0000, 0x02,
	0x602A, 0x1BB0, 0x02,
	0x6F12, 0x0100, 0x02,
	0x0B0E, 0x0100, 0x02,
	0x30D8, 0x0000, 0x02,
	0x31B0, 0x0002, 0x02,
	0x0340, 0x0398, 0x02,
	0x0342, 0x1438, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D8F, 0x02,
	0x034C, 0x0480, 0x02,
	0x034E, 0x0360, 0x02,
	0x0900, 0x0114, 0x02,
	0x0386, 0x0007, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0040, 0x02,
	0x0306, 0x0063, 0x02,
	0x1130, 0x4411, 0x02,
	0x030E, 0x0068, 0x02,
	0x0202, 0x038E, 0x02,
	0x021E, 0x038E, 0x02,
	0x0216, 0x0000, 0x02,
	0x6214, 0x7970, 0x02,
};

/* 9. 1152 x 656 / 4-Bin, 16:9, 120fps, EXTCLK 26Mhz */
const u32 sensor_2p6_setfile_B_1152x656_120fps[] = {
	/*Globel Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x0100, 0x0000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0xF43A, 0x000C, 0x02,
	0xF470, 0x000D, 0x02,
	0x602A, 0x1C50, 0x02,
	0x6F12, 0x15FF, 0x02,
	0x3092, 0x0000, 0x02,
	0x3088, 0x0101, 0x02,
	0x602A, 0x13CE, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0004, 0x02,
	0x602A, 0x196C, 0x02,
	0x6F12, 0x8010, 0x02,
	0x31D2, 0x0220, 0x02,
	0x602A, 0x195E, 0x02,
	0x6F12, 0x0001, 0x02,
	0x3816, 0x0140, 0x02,
	0x3818, 0x0140, 0x02,
	0x3854, 0x0008, 0x02,
	0x3856, 0x0008, 0x02,
	0x3858, 0x0008, 0x02,
	0x385A, 0x0008, 0x02,
	0xF440, 0x002F, 0x02,
	0x319C, 0x0130, 0x02,
	0x602A, 0x1266, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6F12, 0x0000, 0x02,
	0x30D4, 0x0001, 0x02,
	0x30D6, 0x002B, 0x02,
	0xB138, 0x0000, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x030C, 0x0004, 0x02,
	0x300A, 0x0000, 0x02,
	0x0200, 0x0200, 0x02,
	0x0204, 0x0080, 0x02,
	0x37C0, 0x0002, 0x02,
	0x37C2, 0x0103, 0x02,
	0x3004, 0x0003, 0x02,
	0x0114, 0x0300, 0x02,
	0x304C, 0x0000, 0x02,
	0x3AC4, 0x0100, 0x02,
	0x3E04, 0x0100, 0x02,
	0x3B02, 0x000F, 0x02,
	0x3B34, 0x0000, 0x02,
	0x3AD0, 0x0066, 0x02,
	0x3B0C, 0x0000, 0x02,
	0x3B3E, 0x001E, 0x02,
	0x3ADA, 0x0085, 0x02,
	0x3B16, 0x000F, 0x02,
	0x3B48, 0x0046, 0x02,
	0x3AE4, 0x00AD, 0x02,
	0x3B20, 0xFFE2, 0x02,
	0x3B52, 0x0000, 0x02,
	0x3AEE, 0x0085, 0x02,
	0x3E0E, 0x0FEF, 0x02,
	0x3E18, 0x1010, 0x02,
	0x3E22, 0x1018, 0x02,
	0x6214, 0x7970, 0x02,
	/*Size Setting*/
	0xFCFC, 0x4000, 0x02,
	0x6028, 0x2000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x30CE, 0x0040, 0x02,
	0x37F6, 0x0001, 0x02,
	0x3198, 0x00CC, 0x02,
	0x319A, 0x0000, 0x02,
	0x3056, 0x0000, 0x02,
	0x602A, 0x1BB0, 0x02,
	0x6F12, 0x0100, 0x02,
	0x0B0E, 0x0100, 0x02,
	0x30D8, 0x0000, 0x02,
	0x31B0, 0x0002, 0x02,
	0x0340, 0x0398, 0x02,
	0x0342, 0x1438, 0x02,
	0x0346, 0x01B0, 0x02,
	0x034A, 0x0BEF, 0x02,
	0x034C, 0x0480, 0x02,
	0x034E, 0x0290, 0x02,
	0x0900, 0x0114, 0x02,
	0x0386, 0x0007, 0x02,
	0x0400, 0x0001, 0x02,
	0x0404, 0x0040, 0x02,
	0x0306, 0x0063, 0x02,
	0x1130, 0x4411, 0x02,
	0x030E, 0x0068, 0x02,
	0x0202, 0x038E, 0x02,
	0x021E, 0x038E, 0x02,
	0x0216, 0x0000, 0x02,
	0x6214, 0x7970, 0x02,
};

#ifdef S5K2P6_USE_COMPACT_PLL_INFO
const struct sensor_pll_info_compact sensor_2p6_pllinfo_B_4608x3456_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1443 * 1000 * 1000, /* mipi_datarate */
	560440000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1428, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info_compact sensor_2p6_pllinfo_B_4608x2624_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1443 * 1000 * 1000, /* mipi_datarate */
	560440000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1428, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info_compact sensor_2p6_pllinfo_B_4608x2240_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1443 * 1000 * 1000, /* mipi_datarate */
	560440000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1428, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info_compact sensor_2p6_pllinfo_B_2304x1728_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352 * 1000 * 1000, /* mipi_datarate */
	560440000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1428, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info_compact sensor_2p6_pllinfo_B_2304x1728_15fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352 * 1000 * 1000, /* mipi_datarate */
	560440000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x1C34, /* frame_length_lines	(0x0340) */
	0x1428, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info_compact sensor_2p6_pllinfo_B_2304x1312_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352 * 1000 * 1000, /* mipi_datarate */
	560440000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0AAA, /* frame_length_lines	(0x0340) */
	0x1AA8, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info_compact sensor_2p6_pllinfo_B_2304x1120_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352 * 1000 * 1000, /* mipi_datarate */
	560440000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0937, /* frame_length_lines	(0x0340) */
	0x1ED8, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info_compact sensor_2p6_pllinfo_B_1152x864_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352 * 1000 * 1000, /* mipi_datarate */
	572000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0398, /* frame_length_lines	(0x0340) */
	0x1438, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info_compact sensor_2p6_pllinfo_B_1152x656_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1352 * 1000 * 1000, /* mipi_datarate */
	572000000,  /* pclk  = VT pix CLK * 4(this value is different by cis) */
	0x0398, /* frame_length_lines	(0x0340) */
	0x1438, /* line_length_pck		(0x0342) */
};
#else
const struct sensor_pll_info sensor_2p6_pllinfo_B_4608x3456_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x61, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x6F, /* secnd_pll_multiplier	(0x030E) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1428, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_2p6_pllinfo_B_4608x2624_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x61, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x6F, /* secnd_pll_multiplier	(0x030E) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1428, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_2p6_pllinfo_B_4608x2240_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x61, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x6F, /* secnd_pll_multiplier	(0x030E) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1428, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_2p6_pllinfo_B_2304x1728_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x61, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x68, /* secnd_pll_multiplier	(0x030E) */
	0x0E1A, /* frame_length_lines	(0x0340) */
	0x1428, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_2p6_pllinfo_B_2304x1728_15fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x61, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x68, /* secnd_pll_multiplier	(0x030E) */
	0x1C34, /* frame_length_lines	(0x0340) */
	0x1428, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_2p6_pllinfo_B_2304x1312_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x61, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x68, /* secnd_pll_multiplier	(0x030E) */
	0x0AAA, /* frame_length_lines	(0x0340) */
	0x1AA8, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_2p6_pllinfo_B_2304x1120_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x61, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x68, /* secnd_pll_multiplier	(0x030E) */
	0x0937, /* frame_length_lines	(0x0340) */
	0x1ED8, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_2p6_pllinfo_B_1152x864_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x63, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x68, /* secnd_pll_multiplier	(0x030E) */
	0x0398, /* frame_length_lines	(0x0340) */
	0x1438, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_2p6_pllinfo_B_1152x656_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x06, /* pre_pll_clk_div(0x0304) */
	0x63, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x68, /* secnd_pll_multiplier	(0x030E) */
	0x0398, /* frame_length_lines	(0x0340) */
	0x1438, /* line_length_pck		(0x0342) */
};
#endif

static const u32 *sensor_2p6_setfiles_B[] = {
	/* 16x12 margin */
	sensor_2p6_setfile_B_4608x3456_30fps,
	sensor_2p6_setfile_B_4608x2624_30fps,
	sensor_2p6_setfile_B_4608x2240_30fps,
	sensor_2p6_setfile_B_2304x1728_30fps,
	sensor_2p6_setfile_B_2304x1728_15fps,
	sensor_2p6_setfile_B_2304x1312_30fps,
	sensor_2p6_setfile_B_2304x1120_30fps,
	sensor_2p6_setfile_B_1152x864_120fps,
	sensor_2p6_setfile_B_1152x656_120fps,
};

static const u32 sensor_2p6_setfile_B_sizes[] = {
	/* 16x12 margin */
	sizeof(sensor_2p6_setfile_B_4608x3456_30fps) / sizeof(sensor_2p6_setfile_B_4608x3456_30fps[0]),
	sizeof(sensor_2p6_setfile_B_4608x2624_30fps) / sizeof(sensor_2p6_setfile_B_4608x2624_30fps[0]),
	sizeof(sensor_2p6_setfile_B_4608x2240_30fps) / sizeof(sensor_2p6_setfile_B_4608x2240_30fps[0]),
	sizeof(sensor_2p6_setfile_B_2304x1728_30fps) / sizeof(sensor_2p6_setfile_B_2304x1728_30fps[0]),
	sizeof(sensor_2p6_setfile_B_2304x1728_15fps) / sizeof(sensor_2p6_setfile_B_2304x1728_15fps[0]),
	sizeof(sensor_2p6_setfile_B_2304x1312_30fps) / sizeof(sensor_2p6_setfile_B_2304x1312_30fps[0]),
	sizeof(sensor_2p6_setfile_B_2304x1120_30fps) / sizeof(sensor_2p6_setfile_B_2304x1120_30fps[0]),
	sizeof(sensor_2p6_setfile_B_1152x864_120fps) / sizeof(sensor_2p6_setfile_B_1152x864_120fps[0]),
	sizeof(sensor_2p6_setfile_B_1152x656_120fps) / sizeof(sensor_2p6_setfile_B_1152x656_120fps[0]),
};

#ifdef S5K2P6_USE_COMPACT_PLL_INFO
static const struct sensor_pll_info_compact *sensor_2p6_pllinfos_B[] =
#else
static const struct sensor_pll_info *sensor_2p6_pllinfos_B[] =
#endif
{
	/* 16x12 margin */
	&sensor_2p6_pllinfo_B_4608x3456_30fps,
	&sensor_2p6_pllinfo_B_4608x2624_30fps,
	&sensor_2p6_pllinfo_B_4608x2240_30fps,
	&sensor_2p6_pllinfo_B_2304x1728_30fps,
	&sensor_2p6_pllinfo_B_2304x1728_15fps,
	&sensor_2p6_pllinfo_B_2304x1312_30fps,
	&sensor_2p6_pllinfo_B_2304x1120_30fps,
	&sensor_2p6_pllinfo_B_1152x864_120fps,
	&sensor_2p6_pllinfo_B_1152x656_120fps,
};

#endif
