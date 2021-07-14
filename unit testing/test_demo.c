#include "unity.h"
#include "demo.h"
/* reuired by the unity testframework*/
void setUp ()
{

}
/*reuired by unity test framework*/
void tearDown()
{

}

void test_division(void)
{
    int n1 =10, n2 = 20;
    TEST_ASSERT_EQUAL(0.5, division(n1,n2));
    TEST_ASSERT_EQUAL(2, division(n2,n1));
    TEST_ASSERT_EQUAL(12, division(n2,n1));
int main(void)
UNITY_BEGIN();

RUN_TEST(test_division);
return UNITY_END();

}