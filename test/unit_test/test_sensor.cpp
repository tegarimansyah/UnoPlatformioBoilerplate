// #ifdef UNIT_TEST

#include <unity.h>
#include "sensor.hpp"

void test_amonia() {
    TEST_ASSERT_EQUAL(get_sensor, 10);
}

int main( int argc, char **argv) {
    UNITY_BEGIN();

    RUN_TEST(test_amonia);

    UNITY_END();
}

// #endif