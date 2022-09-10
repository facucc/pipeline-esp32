#include <unity.h>
#include "../include/common.h"

#define MAX_TEMP_DISPLAY 15
#define MIN_TEMP_DISPLAY 0
#define MAX_SAMPLING_TIME 40000
#define MIN_SAMPLING_TIME 20000

u_int16_t vSamplingTIme()
{
    return SAMPLING_TIME;
}
uint8_t vTask_GetTemperature()
{    
    return rand()%MAX_TEMP;
}

void TEST_vSamplingTIme(void)
{
  TEST_ASSERT_GREATER_OR_EQUAL(MIN_SAMPLING_TIME, vSamplingTIme());
  TEST_ASSERT_LESS_OR_EQUAL(MAX_SAMPLING_TIME, vSamplingTIme());
}
void TEST_vTask_GetTemperature(void)
{
  TEST_ASSERT_GREATER_OR_EQUAL(MIN_TEMP_DISPLAY, vTask_GetTemperature());
  TEST_ASSERT_LESS_OR_EQUAL(MAX_TEMP_DISPLAY, vTask_GetTemperature());
}

int app_main()
{
  UNITY_BEGIN();

  RUN_TEST(TEST_vTask_GetTemperature);
  RUN_TEST(TEST_vSamplingTIme); 

  return UNITY_END();
}
