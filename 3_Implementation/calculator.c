#include <stdio.h>
#include <math.h>
#include "unity.h"
#define PI 3.14159265
float sine(float x)
{ 
return (sin (x*PI/180));
}
float cosine(float x)
 { 
return (cos (x*PI/180));
}
float tangent(float x)
{
return (tan(x*PI/180));
}
float cosec(float x)
{
return (1/sin(x*PI/180));
}
float sec(float x)
{
return (1/cos(x*PI/180));
}
 float cot(float x)
 {
return (1/tan(x*PI/180));
}
 float logten(float x)
{
return (log10(x));
}
 float squareroot(float x)
 {
return (sqrt(x));
}
float cuberoot(float x)
 {
return (cbrt(x));
}
float exponent(float x)
   {
  return(exp(x));
}
float power(float x, float y)
{
return (pow(x,y));
}
int addition(int x , int y)
{ 
   return(x+y);
}
float subtraction(float x, float y)
{
return (x-y);
}
float multiplication(float x, float y)
{
   return(x*y);
}
float division(float x, float y)
{
return (x/y);
}
float modulo(float x, float y)
{
return (fmodf(x,y));
}
#if 0
int main()

  {

  int n;

    float x,y,answer;
	printf("\t\tWelcome to Scientific Calculator\n\n\n");
    do

    {

   printf("What do you want to do?\n\n");

    printf("1.  Sin(x)\n2.  Cos(x) \n3.  Tan(x) \n4.  Cosec(x) \n5.  Sec(x) \n6.  Cot(x) \n7.  1og10 \n8.  Square Root\n9.  Cube Root\n10. Exponent \n11. Power x^y \n12. Addition \n13. Subtraction x-y \n14. Multiplication \n15. Division x/y \n16. Modulo x(modulo)y\n\n\nEnter 30 to exit\n\nEnter The input\n\n");
    scanf ("%d",&n);

    if (n<11 && n>0)

    {

    printf("\n What is x?\n ");

    scanf("%f",&x);

    switch (n)

    {

        case 1: answer = sine(x);       break;

        case 2: answer = cosine(x);     break;

        case 3: answer = tangent(x);    break;

        case 4: answer = cosec(x);      break;

        case 5: answer = sec(x);        break;

        case 6: answer = cot(x);        break;

        case 7: answer = logten(x);     break;

        case 8: answer = squareroot(x); break;

        case 9: answer = cuberoot(x);  break;

        case 10: answer = exponent(x);   break;

    }

} 


  if(n==11)

{
    printf("What is x and y?\n");

    scanf("%f%f",&x,&y);

    answer = power(x,y);
}else if(n==12)
{
    printf("enter two inputs\n");
    scanf("%f%f",&x,&y);
     answer=addition(x,y);
}else if(n==13)
{
    printf("What is x and y?\n");
    scanf("%f%f",&x,&y);
    answer = subtraction(x,y);

}else if(n==14)
{
   printf("What is x and y?\n");
    scanf("%f%f",&x,&y);
	answer = multiplication(x,y);
} else if(n==15)
{
    printf("What is x and y?\n");
    scanf("%f%f",&x,&y);
    answer = division(x,y);

}else if(n==16)

{
    printf("What is x and y?\n");
    scanf("%f%f",&x,&y);
    answer = modulo(x,y);
}

if (n>0 && n<17)
{
    printf("%f\n",answer);
}
else
{
    printf("Enter correct input.\n\n");

}
if (n==30)
{
	printf("You are out of the Calc\n\n");
}
    }
    while(n!=30);
return 0;
} 
#endif
void test_addition()
{
  
    TEST_ASSERT_EQUAL(3, addition(1, 2));
}    
void test_sine()
{
    TEST_ASSERT_EQUAL(1, sine(90));
}
void test_cosine()
{
    TEST_ASSERT_EQUAL(1, cosine(0));
}
void test_tangent()
{
    TEST_ASSERT_EQUAL(1, tangent(45));
}
void test_cosec()
{
    TEST_ASSERT_EQUAL(2, cosec(30));
}
void test_sec()
{
    TEST_ASSERT_EQUAL(1, sec(0));
}
void test_cot()
{
    TEST_ASSERT_EQUAL(1, cot(45));
}
void test_logten()
{
    TEST_ASSERT_EQUAL(1, logten(10));
}
void test_squareroot()
{
    TEST_ASSERT_EQUAL(2, squareroot(4));
}
void test_cuberoot()
{
    TEST_ASSERT_EQUAL(3, cuberoot(27));
}
void test_exponent()
{
    TEST_ASSERT_EQUAL(2, exponent(1));
}
void test_power()
{
    TEST_ASSERT_EQUAL(8, power(2,3));
}
void test_subtraction()
{
    TEST_ASSERT_EQUAL(1, subtraction(9,8));
}
void test_multiplication()
{
    TEST_ASSERT_EQUAL(6, multiplication(2,3));
}
void test_division()
{
    TEST_ASSERT_EQUAL(2, division(10,5));
}
void test_modulo()
{
    TEST_ASSERT_EQUAL(1, modulo(3,2));
}

void test_addition()
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


