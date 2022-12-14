/*
 * Copyright (C) 2018 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */
#ifndef __EEPROM_I2C_CUSTOM_DRIVER_H
#define __EEPROM_I2C_CUSTOM_DRIVER_H
#include <linux/i2c.h>

/************************************************************
 * I2C read function (Custom)
 * Customer's driver can put on here
 * Below is an example
 ************************************************************/
unsigned int Custom_read_region(struct i2c_client *client,
				unsigned int addr,
				unsigned char *data,
				unsigned int size);

#ifdef ODM_HQ_EDIT
// Yankun.Zhai@ODM_HQ.Multimedia.camera 2018/12/7 add for camera bring up
unsigned int Hi556_read_region(struct i2c_client *client,
                unsigned int addr,
                unsigned char *data,
                unsigned int size);

unsigned int s5k3h7yx_read_region(struct i2c_client *client,
                unsigned int addr,
                unsigned char *data,
                unsigned int size);

unsigned int gc5035_read_region(struct i2c_client *client,
                unsigned int addr,
                unsigned char *data,
                unsigned int size);
unsigned int s5k3h7yx_txd_read_region(struct i2c_client *client,
                unsigned int addr,
                unsigned char *data,
                unsigned int size);

unsigned int gc5035_ofg_read_region(struct i2c_client *client,
                unsigned int addr,
                unsigned char *data,
                unsigned int size);
unsigned int s5k3h7yx_ts_read_region(struct i2c_client *client,
                unsigned int addr,
                unsigned char *data,
                unsigned int size);

#endif
#endif				/* __CAM_CAL_LIST_H */
