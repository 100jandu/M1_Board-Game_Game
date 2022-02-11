#include"D:\LTTs Documents\Submitty assignments\M1_Board-Game_Game\3_Implementation\inc\dice1.h"
#include<time.h>
#include<stdlib.h>
int dice_output()
{
    int upper = 6, lower = 1, dice;
    srand (time (0));
    A:dice = (rand () % (upper - lower + 1)) + lower;
    if (dice == 0)
      goto A;
    else
      return dice;
}