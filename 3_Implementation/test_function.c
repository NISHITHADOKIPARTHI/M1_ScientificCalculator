#include <math.h>
#include "unity.h"
extern  void test_addition();
extern void test_sine();
extern void test_cosine();
extern  void test_tangent();
extern  void test_cosec();
extern   void test_sec();
extern  void test_cot();
extern  void test_logten();
extern  void test_squareroot();
extern void test_cuberoot();
extern void test_exponent();
extern void test_power();
extern void test_subtraction();
extern void test_multiplication();
extern void test_division ();
extern void test_modulo();
void setUp(void)
{

}
void tearDown(void)
{

} 
void test_addITION()
{
    int expected_sum = 0;
    int result_sum = 0;
    
    TEST_ASSERT_EQUAL(SUCCESS, addition(10, 20, &result_sum));
    TEST_ASSERT_EQUAL(30, result_sum);

    TEST_ASSERT_EQUAL(SUCCESS, addition(-10, -20, &result_sum));
    TEST_ASSERT_EQUAL(-30, result_sum);
    
}

void automated_test_add_overflow()
{
    int expected_sum = 0;
    int result_sum = 0;
    TEST_ASSERT_EQUAL(OVERFLOW, add_integers(INT_MAX, 1, &result_sum));   
}

void automated_test_add_underflow()
{
    int expected_sum = 0;
    int result_sum = 0;
    TEST_ASSERT_EQUAL(UNDERFLOW, add_integers(INT_MIN, -1, &result_sum));
}

int main ()
{    
    UnityBegin(NULL);
    RUN_TEST(test_addition);
    RUN_TEST(test_sine);
    RUN_TEST(test_cosine);
    RUN_TEST(test_tangent);
    RUN_TEST(test_cosec);
    RUN_TEST(test_sec);
    RUN_TEST(test_cot);
    RUN_TEST(test_logten);
    RUN_TEST(test_squareroot);
    RUN_TEST(test_cuberoot);
    RUN_TEST(test_exponent);
    RUN_TEST(test_power);
    RUN_TEST(test_subtraction);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_division);
    RUN_TEST(test_modulo);
    return(UnityEnd());
}