#include "common.h"

u_int16_t vSamplingTIme()
{
    return SAMPLING_TIME;
}
uint8_t vTask_GetTemperature()
{    
    return rand()%MAX_TEMP;
}
//Muestra el digito deseado en el visor de 7 segmentos
void vTask_DisplayTemperature()
{
    while(true)
    {    
        for (int i = 0; i < LENGTH_PINS; i++)
            gpio_set_level(GPIO_PINS[i], LOW);       

        for (int i = 0; i < LENGTH_PINS; i++)
            gpio_set_level(GPIO_PINS[i], (VALUES_DISPLAY[3] >> i & 0x1));  

        vTaskDelay(pdMS_TO_TICKS(vSamplingTIme()));     

    }
}
