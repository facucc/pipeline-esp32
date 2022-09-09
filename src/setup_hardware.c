#include "common.h"

void setup_pins()
{
    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_PIN_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = (1ULL << LED) | (1ULL << 18) | (1ULL << 21) | (1ULL << 22) | (1ULL << 23) | (1ULL << 4) | (1ULL << 5) | (1ULL << 19);
    io_conf.pull_down_en = GPIO_PULLDOWN_DISABLE;
    io_conf.pull_up_en = GPIO_PULLUP_DISABLE;
    gpio_config(&io_conf);

    gpio_config_t input_conf;
    input_conf.intr_type = GPIO_PIN_INTR_DISABLE;
    input_conf.mode = GPIO_MODE_INPUT;
    input_conf.pin_bit_mask = (1ULL << 16); //GPIO16 = RX2
    input_conf.pull_down_en = GPIO_PULLDOWN_ENABLE;
    input_conf.pull_up_en = GPIO_PULLUP_DISABLE;
    gpio_config(&input_conf);
}
