#ifndef COMMONH_H
#define COMMONH_H

#include <driver/gpio.h>
#include <driver/uart.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/queue.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "tasks_display.h"
#include "conf_hardware.h"

#define LENGTH_PINS 7
#define MAX_TEMP 30
#define SAMPLING_TIME 30000
#define MAX_TEMP_DISPLAY 15
#define LOW 0


static const uint8_t VALUES_DISPLAY [] = { 0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71 };
static const uint8_t GPIO_PINS []      = { 4, 5, 18, 19, 21, 22, 23 };


#endif