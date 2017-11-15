#include "../unity/src/unity.h"
#include "addition.h"
#include "subtraction.h"
#include "division.h"
#include "multiplication.h"

void testAddition(void);
void testSubtraction(void);
void testDivision(void);
void testMultiplication(void);

int main()
{
    UNITY_BEGIN();

    RUN_TEST(testAddition);
    RUN_TEST(testSubtraction);
    RUN_TEST(testDivision);
    RUN_TEST(testMultiplication);
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

void testDivision(void)
{
    double actual = divide(10.0,1.0);
    double expected = 5.0;
    TEST_ASSERT_NOT_EQUAL(expected, actual);

    actual = divide(10.0,1.0);
    expected = 10.0;
    TEST_ASSERT_EQUAL(expected, actual);
}

void testMultiplication(void)
{
    double actual = multiply(1.0,5.0);
    double expected = 3.0;
    TEST_ASSERT_NOT_EQUAL(expected, actual);

    actual = multiply(1.0,5.0);
    expected = 5.0;
    TEST_ASSERT_EQUAL(expected, actual);
}
