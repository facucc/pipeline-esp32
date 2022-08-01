#include <unity.h>
#include "blink.h"

void test_IgnoredTest(void)
{
    TEST_IGNORE_MESSAGE("This Test Was Ignored On Purpose");
}

void test_blink_led(void)
{
  //Test if DELAY value is between 50 and 5000 ms
  TEST_ASSERT_GREATER_OR_EQUAL(500, DELAY);
  TEST_ASSERT_LESS_OR_EQUAL(5000, DELAY);
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