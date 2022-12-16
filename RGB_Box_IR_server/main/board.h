/* board.h - Board-specific hooks */

/*
 * Copyright (c) 2017 Intel Corporation
 * Additional Copyright (c) 2018 Espressif Systems (Shanghai) PTE LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _BOARD_H_
#define _BOARD_H_

#include "driver/gpio.h"

#if defined(CONFIG_BLE_MESH_ESP_WROOM_32)
#define LED_R GPIO_NUM_18
#define LED_G GPIO_NUM_19
#define LED_B GPIO_NUM_21
#define LED_1 GPIO_NUM_23
#define LED_2 GPIO_NUM_33
#define LED_3 GPIO_NUM_22
#define LED_4 GPIO_NUM_17
#elif defined(CONFIG_BLE_MESH_ESP_WROVER)
#define LED_R GPIO_NUM_0
#define LED_G GPIO_NUM_2
#define LED_B GPIO_NUM_4
#define LED_1 GPIO_NUM_32
#define LED_2 GPIO_NUM_33
#define LED_3 GPIO_NUM_34
#define LED_4 GPIO_NUM_35
#elif defined(CONFIG_BLE_MESH_ESP32C3_DEV)
#define LED_R GPIO_NUM_8
#define LED_G GPIO_NUM_8
#define LED_B GPIO_NUM_8
#define LED_1 GPIO_NUM_32
#define LED_2 GPIO_NUM_33
#define LED_3 GPIO_NUM_34
#define LED_4 GPIO_NUM_35
#endif

#define LED_ON  1
#define LED_OFF 0

struct _led_state {
    uint8_t current;
    uint8_t previous;
    uint8_t pin;
    char *name;
};

void board_led_operation(uint8_t pin, uint8_t onoff);

void board_init(void);

#endif
