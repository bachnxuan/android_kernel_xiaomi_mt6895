/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2019 MediaTek Inc.
 */

#ifndef __MTK_PRINTK_CTRL_H__
#define __MTK_PRINTK_CTRL_H__
static inline void set_detect_count(int val) { }

static inline int get_detect_count(void)
{
	return 0;
}
static inline bool mt_get_uartlog_status(void)
{
	return false;
}

static inline void update_uartlog_status(bool new_value, int value) { }
#endif
