#include "common.h"

//Simula un sensor de temperatura, obteniendo valores entre 0 y MAX_TEMPERATURE (30) ºC
/*
void vTaskGetTemperature()
{
    uint8_t temperature = 0;
    while(true)
    {
        temperature = (uint8_t) (rand()%MAX_TEMPERATURE); //para obtener valores entre 0 y MAX_TEMPERATURE
		xQueueSend(xTempQueue, &temperature, portMAX_DELAY);	
		vTaskDelay(pdMS_TO_TICKS((DELAY / N)));
        //vTaskDelay(pdMS_TO_TICKS(DELAY));
    }    
}*/

//Muestra el digito deseado en el visor de 7 segmentos
void vTaskDisplayTemperature()
{
    while(true)
    {    
        for (int i = 0; i < LENGTH_PINS; i++)
            gpio_set_level(gpio_pingss[i], LOW);       

        vTaskDelay(pdMS_TO_TICKS(100));

        for (int i = 0; i < LENGTH_PINS; i++)
            gpio_set_level(gpio_pingss[i], (values_display[0] >> i & 0x1));  

        vTaskDelay(pdMS_TO_TICKS(DELAY));     

    }
}