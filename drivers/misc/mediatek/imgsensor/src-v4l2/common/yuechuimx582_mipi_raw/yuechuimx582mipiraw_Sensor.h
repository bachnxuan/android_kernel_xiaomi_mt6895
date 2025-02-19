/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

/*****************************************************************************
 *
 * Filename:
 * ---------
 *     YUECHUIMX582mipi_Sensor.h
 *
 * Project:
 * --------
 *     ALPS
 *
 * Description:
 * ------------
 *     CMOS sensor header file
 *
 ****************************************************************************/
#ifndef _YUECHUIMX582MIPI_SENSOR_H
#define _YUECHUIMX582MIPI_SENSOR_H

static kal_uint16 yuechuimx582_init_setting[] = {
	0x0136, 0x18,
	0x0137, 0x00,
	0x3C7E, 0x03,
	0x3C7F, 0x06,
	0x3C00, 0x10,
	0x3C01, 0x10,
	0x3C02, 0x10,
	0x3C03, 0x10,
	0x3C04, 0x10,
	0x3C05, 0x01,
	0x3C06, 0x00,
	0x3C07, 0x00,
	0x3C08, 0x03,
	0x3C09, 0xFF,
	0x3C0A, 0x01,
	0x3C0B, 0x00,
	0x3C0C, 0x00,
	0x3C0D, 0x03,
	0x3C0E, 0xFF,
	0x3C0F, 0x20,
	0x6E1D, 0x00,
	0x6E25, 0x00,
	0x6E38, 0x03,
	0x6E3B, 0x01,
	0x9004, 0x2C,
	0x9200, 0xF4,
	0x9201, 0xA7,
	0x9202, 0xF4,
	0x9203, 0xAA,
	0x9204, 0xF4,
	0x9205, 0xAD,
	0x9206, 0xF4,
	0x9207, 0xB0,
	0x9208, 0xF4,
	0x9209, 0xB3,
	0x920A, 0xB7,
	0x920B, 0x34,
	0x920C, 0xB7,
	0x920D, 0x36,
	0x920E, 0xB7,
	0x920F, 0x37,
	0x9210, 0xB7,
	0x9211, 0x38,
	0x9212, 0xB7,
	0x9213, 0x39,
	0x9214, 0xB7,
	0x9215, 0x3A,
	0x9216, 0xB7,
	0x9217, 0x3C,
	0x9218, 0xB7,
	0x9219, 0x3D,
	0x921A, 0xB7,
	0x921B, 0x3E,
	0x921C, 0xB7,
	0x921D, 0x3F,
	0x921E, 0x85,
	0x921F, 0x77,
	0x9226, 0x42,
	0x9227, 0x52,
	0x9228, 0x60,
	0x9229, 0xB9,
	0x922A, 0x60,
	0x922B, 0xBF,
	0x922C, 0x60,
	0x922D, 0xC5,
	0x922E, 0x60,
	0x922F, 0xCB,
	0x9230, 0x60,
	0x9231, 0xD1,
	0x9232, 0x60,
	0x9233, 0xD7,
	0x9234, 0x60,
	0x9235, 0xDD,
	0x9236, 0x60,
	0x9237, 0xE3,
	0x9238, 0x60,
	0x9239, 0xE9,
	0x923A, 0x60,
	0x923B, 0xEF,
	0x923C, 0x60,
	0x923D, 0xF5,
	0x923E, 0x60,
	0x923F, 0xF9,
	0x9240, 0x60,
	0x9241, 0xFD,
	0x9242, 0x61,
	0x9243, 0x01,
	0x9244, 0x61,
	0x9245, 0x05,
	0x924A, 0x61,
	0x924B, 0x6B,
	0x924C, 0x61,
	0x924D, 0x7F,
	0x924E, 0x61,
	0x924F, 0x92,
	0x9250, 0x61,
	0x9251, 0x9C,
	0x9252, 0x61,
	0x9253, 0xAB,
	0x9254, 0x61,
	0x9255, 0xC4,
	0x9256, 0x61,
	0x9257, 0xCE,
	0x9810, 0x14,
	0x9814, 0x14,
	0xC449, 0x04,
	0xC44A, 0x01,
	0xE286, 0x31,
	0xE2A6, 0x32,
	0xE2C6, 0x33,
	0xE186, 0x2B,
	0x3E14, 0x01,
};

//same as preview
static kal_uint16 yuechuimx582_capture_setting[] = {
};


static kal_uint16 yuechuimx582_preview_setting[] = {
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
	0x0342, 0x1E,
	0x0343, 0xC0,
	0x0340, 0x0E,
	0x0341, 0x4A,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x00,
	0x0347, 0x00,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x17,
	0x034B, 0x6F,
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x08,
	0x3246, 0x81,
	0x3247, 0x81,
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x0F,
	0x040D, 0xA0,
	0x040E, 0x0B,
	0x040F, 0xB8,
	0x034C, 0x0F,
	0x034D, 0xA0,
	0x034E, 0x0B,
	0x034F, 0xB8,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0xB4,
	0x030B, 0x01,
	0x030D, 0x18,
	0x030E, 0x05,
	0x030F, 0x5A,
	0x0310, 0x01,
	0x3620, 0x00,
	0x3621, 0x00,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x01,
	0x3F14, 0x00,
	0x3F80, 0x07,
	0x3F81, 0xB9,
	0x3F82, 0x00,
	0x3F83, 0x00,
	0x3F8C, 0x02,
	0x3F8D, 0x8B,
	0x3FF4, 0x00,
	0x3FF5, 0x00,
	0x3FFC, 0x01,
	0x3FFD, 0x0E,
	0x0202, 0x0E,
	0x0203, 0x1A,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,
	0x3E20, 0x02,
	0x3E3B, 0x01,
	0x4034, 0x01,
	0x4035, 0xF0,
};


static kal_uint16 yuechuimx582_custom2_setting[] = {
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
	0x0342, 0x0B,
	0x0343, 0x60,
	0x0340, 0x08,
	0x0341, 0x34,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x03,
	0x0347, 0x40,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x14,
	0x034B, 0x1F,
	0x0900, 0x01,
	0x0901, 0x44,
	0x0902, 0x08,
	0x3246, 0x89,
	0x3247, 0x89,
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x28,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x07,
	0x040D, 0x80,
	0x040E, 0x04,
	0x040F, 0x38,
	0x034C, 0x07,
	0x034D, 0x80,
	0x034E, 0x04,
	0x034F, 0x38,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0x99,
	0x030B, 0x01,
	0x030D, 0x18,
	0x030E, 0x05,
	0x030F, 0x5A,
	0x0310, 0x01,
	0x3620, 0x00,
	0x3621, 0x00,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x00,
	0x3F14, 0x00,
	0x3F80, 0x00,
	0x3F81, 0x00,
	0x3F82, 0x00,
	0x3F83, 0x00,
	0x3F8C, 0x00,
	0x3F8D, 0x00,
	0x3FF4, 0x00,
	0x3FF5, 0x4C,
	0x3FFC, 0x00,
	0x3FFD, 0x00,
	0x0202, 0x08,
	0x0203, 0x04,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,
	0x3E20, 0x01,
	0x3E3B, 0x00,
	0x4034, 0x01,
	0x4035, 0xF0,
};

static kal_uint16 yuechuimx582_normal_video_setting[] = {
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
	0x0342, 0x1E,
	0x0343, 0xC0,
	0x0340, 0x0E,
	0x0341, 0x4A,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x02,
	0x0347, 0xE8,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x14,
	0x034B, 0x87,
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x08,
	0x3246, 0x81,
	0x3247, 0x81,
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x0F,
	0x040D, 0xA0,
	0x040E, 0x08,
	0x040F, 0xD0,
	0x034C, 0x0F,
	0x034D, 0xA0,
	0x034E, 0x08,
	0x034F, 0xD0,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0xB4,
	0x030B, 0x01,
	0x030D, 0x18,
	0x030E, 0x05,
	0x030F, 0x5A,
	0x0310, 0x01,
	0x3620, 0x00,
	0x3621, 0x00,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x01,
	0x3F14, 0x00,
	0x3F80, 0x07,
	0x3F81, 0xB9,
	0x3F82, 0x00,
	0x3F83, 0x00,
	0x3F8C, 0x02,
	0x3F8D, 0x8B,
	0x3FF4, 0x00,
	0x3FF5, 0x00,
	0x3FFC, 0x01,
	0x3FFD, 0x0E,
	0x0202, 0x0E,
	0x0203, 0x1A,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,
	0x3E20, 0x02,
	0x3E3B, 0x01,
	0x4034, 0x01,
	0x4035, 0xF0,
};

static kal_uint16 yuechuimx582_hs_video_setting[] = {
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
	0x0342, 0x0B,
	0x0343, 0x60,
	0x0340, 0x04,
	0x0341, 0xD4,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x03,
	0x0347, 0x40,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x14,
	0x034B, 0x1F,
	0x0900, 0x01,
	0x0901, 0x44,
	0x0902, 0x08,
	0x3246, 0x89,
	0x3247, 0x89,
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x28,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x07,
	0x040D, 0x80,
	0x040E, 0x04,
	0x040F, 0x38,
	0x034C, 0x07,
	0x034D, 0x80,
	0x034E, 0x04,
	0x034F, 0x38,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0xB4,
	0x030B, 0x01,
	0x030D, 0x18,
	0x030E, 0x07,
	0x030F, 0xAC,
	0x0310, 0x01,
	0x3620, 0x00,
	0x3621, 0x00,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x00,
	0x3F14, 0x00,
	0x3F80, 0x00,
	0x3F81, 0x00,
	0x3F82, 0x00,
	0x3F83, 0x00,
	0x3F8C, 0x00,
	0x3F8D, 0x00,
	0x3FF4, 0x00,
	0x3FF5, 0x4C,
	0x3FFC, 0x00,
	0x3FFD, 0x00,
	0x0202, 0x04,
	0x0203, 0xA4,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,
	0x3E20, 0x01,
	0x3E3B, 0x00,
	0x4034, 0x01,
	0x4035, 0xF0,

};

//same as preview
static kal_uint16 yuechuimx582_slim_video_setting[] = {
};

//same as preview
static kal_uint16 yuechuimx582_custom1_setting[] = {
};

static kal_uint16 yuechuimx582_custom3_setting[] = {
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
	0x0342, 0x11,
	0x0343, 0xF0,
	0x0340, 0x0A,
	0x0341, 0x00,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x02,
	0x0347, 0xE8,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x14,
	0x034B, 0x87,
	0x0900, 0x01,
	0x0901, 0x22,
	0x0902, 0x08,
	0x3246, 0x81,
	0x3247, 0x81,
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x0F,
	0x040D, 0xA0,
	0x040E, 0x08,
	0x040F, 0xD0,
	0x034C, 0x0F,
	0x034D, 0xA0,
	0x034E, 0x08,
	0x034F, 0xD0,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0x93,
	0x030B, 0x01,
	0x030D, 0x18,
	0x030E, 0x07,
	0x030F, 0xAC,
	0x0310, 0x01,
	0x3620, 0x00,
	0x3621, 0x00,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x00,
	0x3F14, 0x01,
	0x3F80, 0x00,
	0x3F81, 0x00,
	0x3F82, 0x04,
	0x3F83, 0x38,
	0x3F8C, 0x00,
	0x3F8D, 0x00,
	0x3FF4, 0x00,
	0x3FF5, 0x00,
	0x3FFC, 0x00,
	0x3FFD, 0x00,
	0x0202, 0x09,
	0x0203, 0xD0,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,
	0x3E20, 0x02,
	0x3E3B, 0x00,
	0x4034, 0x01,
	0x4035, 0xF0,
};

static kal_uint16 yuechuimx582_custom4_setting[] = {//8000x6000 full size
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
	0x0342, 0x23,
	0x0343, 0xE0,
	0x0340, 0x18,
	0x0341, 0x7F,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x00,
	0x0347, 0x00,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x17,
	0x034B, 0x6F,
	0x0900, 0x00,
	0x0901, 0x11,
	0x0902, 0x0A,
	0x3246, 0x01,
	0x3247, 0x01,
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x00,
	0x0409, 0x00,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x1F,
	0x040D, 0x40,
	0x040E, 0x17,
	0x040F, 0x70,
	0x034C, 0x1F,
	0x034D, 0x40,
	0x034E, 0x17,
	0x034F, 0x70,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0xB4,
	0x030B, 0x01,
	0x030D, 0x18,
	0x030E, 0x07,
	0x030F, 0xAC,
	0x0310, 0x01,
	0x3620, 0x01,
	0x3621, 0x01,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x00,
	0x3F14, 0x01,
	0x3F80, 0x04,
	0x3F81, 0xB0,
	0x3F82, 0x00,
	0x3F83, 0x00,
	0x3F8C, 0x03,
	0x3F8D, 0x5C,
	0x3FF4, 0x00,
	0x3FF5, 0x00,
	0x3FFC, 0x00,
	0x3FFD, 0x00,
	0x0202, 0x18,
	0x0203, 0x4F,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,
	0x3E20, 0x02,
	0x3E3B, 0x00,
	0x4034, 0x01,
	0x4035, 0xF0,
};

static kal_uint16 yuechuimx582_custom5_setting[] = {
	0x0112, 0x0A,
	0x0113, 0x0A,
	0x0114, 0x03,
	0x0342, 0x23,
	0x0343, 0xE0,
	0x0340, 0x0C,
	0x0341, 0x3F,
	0x0344, 0x00,
	0x0345, 0x00,
	0x0346, 0x05,
	0x0347, 0xD8,
	0x0348, 0x1F,
	0x0349, 0x3F,
	0x034A, 0x11,
	0x034B, 0x8F,
	0x0900, 0x00,
	0x0901, 0x11,
	0x0902, 0x0A,
	0x3246, 0x01,
	0x3247, 0x01,
	0x0401, 0x00,
	0x0404, 0x00,
	0x0405, 0x10,
	0x0408, 0x07,
	0x0409, 0xD0,
	0x040A, 0x00,
	0x040B, 0x00,
	0x040C, 0x0F,
	0x040D, 0xA0,
	0x040E, 0x0B,
	0x040F, 0xB8,
	0x034C, 0x0F,
	0x034D, 0xA0,
	0x034E, 0x0B,
	0x034F, 0xB8,
	0x0301, 0x05,
	0x0303, 0x02,
	0x0305, 0x02,
	0x0306, 0x00,
	0x0307, 0xB4,
	0x030B, 0x01,
	0x030D, 0x18,
	0x030E, 0x05,
	0x030F, 0x5A,
	0x0310, 0x01,
	0x3620, 0x01,
	0x3621, 0x01,
	0x380C, 0x80,
	0x3C13, 0x00,
	0x3C14, 0x28,
	0x3C15, 0x28,
	0x3C16, 0x32,
	0x3C17, 0x46,
	0x3C18, 0x67,
	0x3C19, 0x8F,
	0x3C1A, 0x8F,
	0x3C1B, 0x99,
	0x3C1C, 0xAD,
	0x3C1D, 0xCE,
	0x3C1E, 0x8F,
	0x3C1F, 0x8F,
	0x3C20, 0x99,
	0x3C21, 0xAD,
	0x3C22, 0xCE,
	0x3C25, 0x22,
	0x3C26, 0x23,
	0x3C27, 0xE6,
	0x3C28, 0xE6,
	0x3C29, 0x08,
	0x3C2A, 0x0F,
	0x3C2B, 0x14,
	0x3F0C, 0x00,
	0x3F14, 0x01,
	0x3F80, 0x07,
	0x3F81, 0xB9,
	0x3F82, 0x00,
	0x3F83, 0x00,
	0x3F8C, 0x02,
	0x3F8D, 0x8B,
	0x3FF4, 0x00,
	0x3FF5, 0x00,
	0x3FFC, 0x01,
	0x3FFD, 0x0E,
	0x0202, 0x0C,
	0x0203, 0x0F,
	0x0224, 0x01,
	0x0225, 0xF4,
	0x3FE0, 0x01,
	0x3FE1, 0xF4,
	0x0204, 0x00,
	0x0205, 0x70,
	0x0216, 0x00,
	0x0217, 0x70,
	0x0218, 0x01,
	0x0219, 0x00,
	0x020E, 0x01,
	0x020F, 0x00,
	0x0210, 0x01,
	0x0211, 0x00,
	0x0212, 0x01,
	0x0213, 0x00,
	0x0214, 0x01,
	0x0215, 0x00,
	0x3FE2, 0x00,
	0x3FE3, 0x70,
	0x3FE4, 0x01,
	0x3FE5, 0x00,
	0x3E20, 0x02,
	0x3E3B, 0x01,
	0x4034, 0x00,
	0x4035, 0xF8,
};

//same as preview
static kal_uint16 yuechuimx582_custom6_setting[] = {
};

static kal_uint16 yuechuimx582_Image_quality_setting[] = {
	0x88D6, 0x60,
	0x9852, 0x00,
	0xAE09, 0xFF,
	0xAE0A, 0xFF,
	0xAE12, 0x58,
	0xAE13, 0x58,
	0xAE15, 0x10,
	0xAE16, 0x10,
	0xB071, 0x00,
};

enum IMGSENSOR_MODE {
	IMGSENSOR_MODE_PREVIEW,
	IMGSENSOR_MODE_CAPTURE,
	IMGSENSOR_MODE_VIDEO,
	IMGSENSOR_MODE_HIGH_SPEED_VIDEO,
	IMGSENSOR_MODE_SLIM_VIDEO,
	IMGSENSOR_MODE_CUSTOM1,
	IMGSENSOR_MODE_CUSTOM2,
	IMGSENSOR_MODE_CUSTOM3,
	IMGSENSOR_MODE_CUSTOM4,
	IMGSENSOR_MODE_CUSTOM5,
	IMGSENSOR_MODE_CUSTOM6,
	IMGSENSOR_MODE_CUSTOM7,
	IMGSENSOR_MODE_CUSTOM8,
	IMGSENSOR_MODE_CUSTOM9,
	IMGSENSOR_MODE_CUSTOM10,
	IMGSENSOR_MODE_CUSTOM11,
	IMGSENSOR_MODE_CUSTOM12,
	IMGSENSOR_MODE_CUSTOM13,
	IMGSENSOR_MODE_CUSTOM14,
	IMGSENSOR_MODE_CUSTOM15,
	IMGSENSOR_MODE_INIT = 0xff,
};

enum {
	OTP_QSC_NONE = 0x0,
	OTP_QSC_INTERNAL,
	OTP_QSC_CUSTOM,
};

struct imgsensor_mode_struct {
	kal_uint32 pclk; /* record different mode's pclk */
	kal_uint32 linelength; /* record different mode's linelength */
	kal_uint32 framelength; /* record different mode's framelength */

	kal_uint8 startx; /* record different mode's startx of grabwindow */
	kal_uint8 starty; /* record different mode's startx of grabwindow */

	kal_uint16 grabwindow_width;
	kal_uint16 grabwindow_height;

/* for MIPIDataLowPwr2HighSpeedSettleDelayCount by different scenario*/
	kal_uint8 mipi_data_lp2hs_settle_dc;

 /*     following for GetDefaultFramerateByScenario()    */
	kal_uint16 max_framerate;
	kal_uint32 mipi_pixel_rate;
};

/* SENSOR PRIVATE STRUCT FOR VARIABLES*/
struct imgsensor_struct {
	kal_uint8 mirror; /* mirrorflip information */

	kal_uint8 sensor_mode; /* record IMGSENSOR_MODE enum value */

	kal_uint32 shutter; /* current shutter */
	kal_uint16 gain; /* current gain */

	kal_uint32 pclk; /* current pclk */

	kal_uint32 frame_length; /* current framelength */
	kal_uint32 line_length; /* current linelength */

	kal_uint32 min_frame_length;
	kal_uint16 dummy_pixel; /* current dummypixel */
	kal_uint16 dummy_line; /* current dummline */

	kal_uint16 current_fps; /* current max fps */
	kal_bool autoflicker_en; /* record autoflicker enable or disable */
	kal_bool test_pattern; /* record test pattern mode or not */
	enum MSDK_SCENARIO_ID_ENUM current_scenario_id;
	kal_bool ihdr_en; /* ihdr enable or disable */
	kal_uint8 ihdr_mode; /* ihdr enable or disable */
	kal_uint8 pdaf_mode; /* ihdr enable or disable */
	kal_uint8 i2c_write_id; /* record current sensor's i2c write id */
};

/* SENSOR PRIVATE STRUCT FOR CONSTANT*/
struct imgsensor_info_struct {
	kal_uint32 sensor_id; /* record sensor id defined in Kd_imgsensor.h */
	kal_uint32 checksum_value; /* checksum value for Camera Auto Test */
	struct imgsensor_mode_struct pre;
	struct imgsensor_mode_struct cap;
	struct imgsensor_mode_struct normal_video;
	struct imgsensor_mode_struct hs_video;
	struct imgsensor_mode_struct slim_video;
	struct imgsensor_mode_struct custom1;
	struct imgsensor_mode_struct custom2;
	struct imgsensor_mode_struct custom3;
	struct imgsensor_mode_struct custom4;
	struct imgsensor_mode_struct custom5;
	struct imgsensor_mode_struct custom6;
	struct imgsensor_mode_struct custom7;
	struct imgsensor_mode_struct custom8;
	struct imgsensor_mode_struct custom9;
	struct imgsensor_mode_struct custom10;
	struct imgsensor_mode_struct custom11;
	struct imgsensor_mode_struct custom12;
	struct imgsensor_mode_struct custom13;
	struct imgsensor_mode_struct custom14;
	struct imgsensor_mode_struct custom15;

	kal_uint8 ae_shut_delay_frame; /* shutter delay frame for AE cycle */
	kal_uint8 ae_sensor_gain_delay_frame;
	kal_uint8 ae_ispGain_delay_frame;
	kal_uint8 ihdr_support; /* 1, support; 0,not support */
	kal_uint8 ihdr_le_firstline; /* 1,le first ; 0, se first */
	kal_uint8 temperature_support;	/* 1, support; 0,not support */
	kal_uint8 sensor_mode_num; /* support sensor mode num */

	kal_uint8 cap_delay_frame; /* enter capture delay frame num */
	kal_uint8 pre_delay_frame; /* enter preview delay frame num */
	kal_uint8 video_delay_frame; /* enter video delay frame num */
	kal_uint8 hs_video_delay_frame;
	kal_uint8 slim_video_delay_frame; /* enter slim video delay frame num */
	kal_uint8 custom1_delay_frame; /* enter custom1 delay frame num */
	kal_uint8 custom2_delay_frame; /* enter custom2 delay frame num */
	kal_uint8 custom3_delay_frame; /* enter custom3 delay frame num */
	kal_uint8 custom4_delay_frame; /* enter custom4 delay frame num */
	kal_uint8 custom5_delay_frame; /* enter custom5 delay frame num */
	kal_uint8 custom6_delay_frame; /* enter custom6 delay frame num */
	kal_uint8 custom7_delay_frame; /* enter custom7 delay frame num */
	kal_uint8 custom8_delay_frame; /* enter custom8 delay frame num */
	kal_uint8 custom9_delay_frame; /* enter custom9 delay frame num */
	kal_uint8 custom10_delay_frame; /* enter custom10 delay frame num */
	kal_uint8 custom11_delay_frame; /* enter custom11 delay frame num */
	kal_uint8 custom12_delay_frame; /* enter custom12 delay frame num */
	kal_uint8 custom13_delay_frame; /* enter custom13 delay frame num */
	kal_uint8 custom14_delay_frame; /* enter custom14 delay frame num */
	kal_uint8 custom15_delay_frame; /* enter custom15 delay frame num */

	kal_uint8  frame_time_delay_frame;
	kal_uint8 margin; /* sensor framelength & shutter margin */
	kal_uint32 min_shutter; /* min shutter */
	kal_uint32 max_frame_length;
	kal_uint32 min_gain;
	kal_uint32 max_gain;
	kal_uint32 min_gain_iso;
	kal_uint32 gain_step;
	kal_uint32 exp_step;
	kal_uint32 gain_type;
	kal_uint8 isp_driving_current; /* mclk driving current */
	kal_uint8 sensor_interface_type; /* sensor_interface_type */
	kal_uint8 mipi_sensor_type;
	/* 0,MIPI_OPHY_NCSI2; 1,MIPI_OPHY_CSI2, default is NCSI2,
	 * don't modify this para
	 */
	kal_uint8 mipi_settle_delay_mode;
	/* 0, high speed signal auto detect;
	 * 1, use settle delay,unit is ns,
	 * default is auto detect, don't modify this para
	 */
	kal_uint8 sensor_output_dataformat;
	kal_uint8 mclk;	 /* mclk value, suggest 24 or 26 for 24Mhz or 26Mhz */
	kal_uint32 i2c_speed; /* i2c speed */
	kal_uint8 mipi_lane_num; /* mipi lane num */
	kal_uint8 i2c_addr_table[5];
};

struct SEAMLESS_SYS_DELAY {
	uint32_t source_scenario;
	uint32_t target_scenario;
	uint32_t sys_delay;
};

/* SENSOR READ/WRITE ID */
/* #define IMGSENSOR_WRITE_ID_1 (0x6c) */
/* #define IMGSENSOR_READ_ID_1  (0x6d) */
/* #define IMGSENSOR_WRITE_ID_2 (0x20) */
/* #define IMGSENSOR_READ_ID_2  (0x21) */

extern int iReadRegI2C(u8 *a_pSendData, u16 a_sizeSendData,
	u8 *a_pRecvData, u16 a_sizeRecvData,
		       u16 i2cId);
extern int iWriteRegI2C(u8 *a_pSendData, u16 a_sizeSendData, u16 i2cId);

extern void read_imx230_eeprom(void);
int iBurstWriteReg_multi(u8 *pData, u32 bytes, u16 i2cId,
	u16 transfer_length, u16 timing);

extern int iReadReg(u16 a_u2Addr, u8 *a_puBuff, u16 i2cId);
extern int iWriteReg(u16 a_u2Addr, u32 a_u4Data, u32 a_u4Bytes, u16 i2cId);
extern void kdSetI2CSpeed(u16 i2cSpeed);
extern int iBurstWriteReg_multi(u8 *pData, u32 bytes, u16 i2cId,
				u16 transfer_length, u16 timing);
#endif
