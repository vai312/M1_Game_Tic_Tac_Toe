#include "unity.h"
#include "function.h"


#define PROJECT_NAME    "TIC TAC TOE"


void setUp()
{   

}

void tearDown()
{

}

void test_successfullWin()
{
    char array[17]={'0','X','X','X','X',
                        'X','O','O','O',
                        'X','X','X','O',
                        'O','O','O','X'};
     TEST_ASSERT_EQUAL(1, check_if_win(array));
}
void test_successfuldraw()
{
    char array[17]={'0',  'X','O','X','X',
                        'X','O','O','O',
                        'X','X','X','O',
                        'O','O','O','X'};
    TEST_ASSERT_EQUAL(0,check_if_win(array));
}
void test_Emptyboard()
{
    char array[17]={ '\0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' , 'j', 'k', 'l', 'm', 'n', 'y', 'z'};
    TEST_ASSERT_EQUAL(-1,check_if_win(array));
}
int main()
{
  UNITY_BEGIN();
  RUN_TEST(test_successfullWin);
  RUN_TEST(test_successfuldraw);
  RUN_TEST(test_Emptyboard);
  return UNITY_END();
}
