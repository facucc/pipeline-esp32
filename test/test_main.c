#include <unity.h>
#include "blink.h"

void test_IgnoredTest(void)
{
    TEST_IGNORE_MESSAGE("This Test Was Ignored On Purpose");
}

void test_blink_led(void)
{
    TEST_ASSERT_GREATER_THAN(100, DELAY);
}
int runUnityTests(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_IgnoredTest);
  RUN_TEST(test_blink_led);
  return UNITY_END();
}
void app_main()
{
  runUnityTests();
}