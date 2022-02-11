#include "D:\LTTs Documents\Submitty assignments\M1_Board-Game_Game\3_Implementation\unity\unity.h"
#include "D:\LTTs Documents\Submitty assignments\M1_Board-Game_Game\3_Implementation\inc\dice1.h"
#include "D:\LTTs Documents\Submitty assignments\M1_Board-Game_Game\3_Implementation\src\dice.c"
#include "D:\LTTs Documents\Submitty assignments\M1_Board-Game_Game\3_Implementation\src\diceout6.c"
#include "D:\LTTs Documents\Submitty assignments\M1_Board-Game_Game\3_Implementation\unity\unity.c"


void setUp(void){};

void tearDown(void){};
void test_diceoutput(void)
{
    TEST_ASSERT_GREATER_THAN_INT(0,dice_output());
}
void test_diceoutput1(void)
{
    TEST_ASSERT_LESS_OR_EQUAL_INT(6,dice_output());
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_diceoutput);
    RUN_TEST(test_diceoutput1);
    return UNITY_END();
}