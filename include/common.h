#ifndef COMMONH_H
#define COMMONH_H

//FreeRTOS and Platformio
#include <driver/gpio.h>
#include <driver/uart.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/queue.h>

//C Libs
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//Project Includes
//#include "tasks_display.h"

//Constant Parameters
#define LED 2 // LED connected to GPIO2
#define DELAY 2000 // milliseconds to delay blink
#define LENGTH_PINS 7
#define LOW 0

void vTaskGetTemperature();
void vTaskDisplayTemperature();
void setup_pins();

uint8_t values_display[] = {
                // XGFEDCBA
        0x3f, // 0b00111111,    // 0
        0x06, // 0b00000110,    // 1
        0x5b, // 0b01011011,    // 2
        0x4f, // 0b01001111,    // 3
        0x66, // 0b01100110,    // 4
        0x6d, // 0b01101101,    // 5
        0x7d, // 0b01111101,    // 6
        0x07, // 0b00000111,    // 7
        0x7f, // 0b01111111,    // 8
        0x6f, // 0b01101111,    // 9
        0x77, // 0b01110111,    // A
        0x7c, // 0b01111100,    // b
        0x39, // 0b00111001,    // C
        0x5e, // 0b01011110,    // d
        0x79, // 0b01111001,    // E
        0x71, // 0b01110001     // F
};
uint8_t gpio_pingss [] = {4, 5, 18, 19, 21, 22, 23};


#endif