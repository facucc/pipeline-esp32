#include "blink.h"

void blink_led(uint8_t led, uint16_t delay)
{

    while (1)
    {
        gpio_set_level(led, 0);
        vTaskDelay(pdMS_TO_TICKS(delay));
        gpio_set_level(led, 1);
        vTaskDelay(pdMS_TO_TICKS(delay));
    }
}