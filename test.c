#include "../unity/src/unity.h"
#include "addition.h"

void testAddition(void);

int main()
{
    UNITY_BEGIN();

    testAddition();

    UNITY_END();
    return 0;
}

void testAddition()
{
    double actual = add(1.0,1.0);
    double expected = 0.0;
    TEST_ASSERT_NOT_EQUAL(expected, actual);

    actual = add(1.0,1.0);
    expected = 2.0;
    TEST_ASSERT_EQUAL(expected, actual);
}
