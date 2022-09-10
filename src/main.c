#include "common.h"

int app_main()
{
    setup_pins();
    vTask_DisplayTemperature();
        
    return 0;
}