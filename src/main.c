#include "common.h"

int app_main()
{

    setup_pins();
    vTaskDisplayTemperature();

/*
    xTaskCreate(vTaskGetTemperature,(const char *)"Sensor", (unsigned short) STACK_SIZE, NULL, 1, NULL); //Priority 1    
    xTaskCreate(vTaskDisplayTemperature,(const char *)"Display", (unsigned short) STACK_SIZE, NULL, 1, NULL); //Priority 1
    
    vTaskStartScheduler(); //NO FUNCIONA

*/
    
    return 0;
}