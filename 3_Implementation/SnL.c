/**
 * @file SnL.c
 *
 * @author saujandu roy
 * @brief Snake and Ladder Board Game
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "D:\LTTs Documents\Submitty assignments\M1_Board-Game_Game\3_Implementation\inc\dice1.h"
#include "D:\LTTs Documents\Submitty assignments\M1_Board-Game_Game\3_Implementation\src\dice.c"
#include "D:\LTTs Documents\Submitty assignments\M1_Board-Game_Game\3_Implementation\src\diceout6.c"

// int roll_dice()
// {
//     int upper =6, lower=1, output;
//     srand(time(0));
//     A:output=(rand()%(upper-lower+1))+lower;
//     if (output == 0)
//       goto A;
//     else
//       return output;
// }
// int Dice_output_is_6()
// {
//     printf("Dice rolled out is 6, You got an extra chance to roll dice");
//     int D = roll_dice();
//     //printf("Dice Rolled out is %d", D);
//     return D;
// }
struct SnLad
{
    int start;
    int end;
};
int main()
{
    char choice;
    int dice, P1=0, P2=0,i;

    struct SnLad Snake[10]={{46,15}, {48,9}, {52,11}, {59,18}, {68,3}, {69,3}, {83,39},{89,51}, {93,36}, {98,13} };
    struct SnLad Ladder[11]={{8,26}, {19,38}, {21,82}, {28,53}, {36,57}, {43,77}, {50,91}, {54,88}, {61,99}, {62,96},{66,87}};
    printf("\t\tWELCOME TO GAME OF SNAKES AND LADDER\n Basic Information\n");
    printf("Position for Snakes\n 46->15\t 48->9\t 52->11\t 59->18\t 68->3\t 69->33\t 83->39\t 89->51\t 93->36\t 98->13\n");
    printf("Position fof Ladders\n 8->26\t 19->38\t 21->82\t 28->53\t 36->57\t 43->77\t 50->91\t 54->88\t 61->99\t 62->96\t 66->87\n");
    printf("Rule:\n \t *If dice rolled out is 6 you got a bonus chance to roll again.\n \t *Reach 100 to win the game.\n");
    
    while (1)
    {
        printf(" Enter 1 to play as Player 1.\n Enter 2 to play as Player 2.\n Enter 3 to exit the Game. \n");
        scanf("%s",&choice);
        switch (choice)
        {
        case '1':
            dice= dice_output();
            if (dice==6)
            {
                diceout6();
                dice = dice_output();
            }
            P1=P1+dice;
            if(P1<101)
            {
                for(i=0;i<7;i++)
                {
                    if(P1==Snake[i].start)
                    {
                        printf("OOPS! YOU CAUGHT A SNAKE.\n");
                        P1=Snake[i].end;
                    }
                    else if(P1==Ladder[i].start)
                        {
                            printf("SUPERB! YOU GOT A LADDER.\n");
                            P1= Ladder[i].end;
                        }
                }
            }
            else
            {
                P1=100;
                printf("BRAVO! YOU WIN...\n");
                printf("Dice=%d\n Player 1 Position is %d",dice,P1);
                return(0);
            }
             printf("Dice=%d\n Player 1 Position is %d",dice,P1);
            break;
        case '2':
            dice = dice_output();
            if (dice==6)
            {
                diceout6();
                dice = dice_output();
            }
            P1=P1+dice;
            if(P2<101)
            {
                for(i=0;i<7;i++)
                {
                    if(P2==Snake[i].start)
                    {
                        printf("OOPS! YOU CAUGHT A SNAKE.\n");
                        P2=Snake[i].end;
                    }
                    else if(P2==Ladder[i].start)
                        {
                            printf("SUPERB! YOU GOT A LADDER.\n");
                            P2= Ladder[i].end;
                        }
                }
            }
            else
            {
                P2=100;
                printf("BRAVO! YOU WIN...\n");
                printf("Dice=%d\n Player 2 Position is %d",dice,P1);
                return(0);
            }
             printf("Dice=%d\n Player 2 Position is %d",dice,P1);
            break;
        case '3':
        printf("YOU PRESSED '3', GAME IS SHUTTING DOWN.\n");
        default:
            //printf("Incorrect Choice!\n");
            break;
        }
    }
    
}
