#include "../unity/src/unity.h"
#include "addition.h"
#include "subtraction.h"

void testAddition(void);
void testSubtraction(void);

int main()
{
    UNITY_BEGIN();

    RUN_TEST(testAddition);
    RUN_TEST(testSubtraction);
    testAddition();

    UNITY_END();
    return 0;
}

void testAddition(void)
{
    double actual = add(1.0,1.0);
    double expected = 0.0;
    TEST_ASSERT_NOT_EQUAL(expected, actual);

    actual = add(1.0,1.0);
    expected = 2.0;
    TEST_ASSERT_EQUAL(expected, actual);
}

void testSubtraction(void)
{
    double actual = subtract(1.0,1.0);
    double expected = 1.0;
    TEST_ASSERT_NOT_EQUAL(expected, actual);

    actual = subtract(1.0,1.0);
    expected = 0.0;
    TEST_ASSERT_EQUAL(expected, actual);
}
