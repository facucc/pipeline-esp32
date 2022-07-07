#include <stdint.h>
#include <driver/gpio.h>
// Include FreeRTOS for delay
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#define LED 2     // LED connected to GPIO2
#define DELAY 1000 // milliseconds to delay blink

void blink_led(uint8_t led, uint16_t delay);