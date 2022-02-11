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


struct SnLad
{
    int start;
    int end;
};
int main()
{
    int choice;
    int dice, P1=0, P2=0, P3=0, P4=0,i;

    struct SnLad Snake[10]={{46,15}, {48,9}, {52,11}, {59,18}, {68,3}, {69,3}, {83,39},{89,51}, {93,36}, {98,13} };
    struct SnLad Ladder[11]={{8,26}, {19,38}, {21,82}, {28,53}, {36,57}, {43,77}, {50,91}, {54,88}, {61,99}, {62,96},{66,87}};
    printf("\t\tWELCOME TO GAME OF SNAKES AND LADDER\n \t\tBasic Information\n\n");
    printf("Position for Snakes\n 46->15\t 48->9\t 52->11\t 59->18\t 68->3\t 69->33\t 83->39\t 89->51\t 93->36\t 98->13\n\n\n");
    printf("Position fof Ladders\n 8->26\t 19->38\t 21->82\t 28->53\t 36->57\t 43->77\t 50->91\t 54->88\t 61->99\t 62->96\t 66->87\n\n\n");
    printf("Rule:\n \t *If dice rolled out is 6 you got a bonus chance to roll again.\n \t *Reach 100 to win the game.\n");
    
    while (1)
    {
        printf("\n Enter 1 to play as Player 1.\n Enter 2 to play as Player 2.\n Enter 3 to play as Player 3.\n Enter 4 to play as Player 4.\n Enter 5 to exit the Game. \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case (1):
            dice= dice_output();
            if (dice==6)
            {
                diceout6();
                dice = dice_output();
            }
            P1=P1+dice;
            if(P1<101)
            {
                for(i=0;i<10;i++)
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
                if (P1==100)
                {
                    printf("Dice=%d\n Player 1 Position is %d\n",dice,P1);
                    printf("BRAVO! PLAYER 1 WON...\n");
                    return(0);
                }
                
            }
            if(P1>100)
            {
                printf("OOPS! POSITION CAN NOT BE OBTAINED, PLEASE ROLL THE DICE AGAIN\n");
                P1=P1-dice;
                printf("Player 1 Position is %d",P1);
                break;
            }

             printf("Dice=%d\n Player 1 Position is %d",dice,P1);
            break;
        case (2):
            dice = dice_output();
            if (dice==6)
            {
                diceout6();
                dice = dice_output();
            }
            P2=P2+dice;
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
            
            if (P2==100)
                {
                    printf("Dice=%d\n Player 2 Position is %d\n",dice,P1);
                    printf("BRAVO! PLAYER 2 WON...\n");
                    return(0);
                }
            }
            if(P2>100)
            {
                printf("OOPS! POSITION CAN NOT BE OBTAINED, PLEASE ROLL THE DICE AGAIN");
                P2=P2-dice;
                printf("Player 2 Position is %d",P2);
                break;
            }
            
             printf("Dice=%d\n Player 2 Position is %d",dice,P2);
            break;
        case (3):
            dice= dice_output();
            if (dice==6)
            {
                diceout6();
                dice = dice_output();
            }
            P3=P3+dice;
            if(P1<101)
            {
                for(i=0;i<7;i++)
                {
                    if(P3==Snake[i].start)
                    {
                        printf("OOPS! YOU CAUGHT A SNAKE.\n");
                        P3=Snake[i].end;
                    }
                    else if(P3==Ladder[i].start)
                        {
                            printf("SUPERB! YOU GOT A LADDER.\n");
                            P3= Ladder[i].end;
                        }
                }
            if (P3==100)
                {
                    printf("Dice=%d\n Player 3 Position is %d\n",dice,P1);
                    printf("BRAVO! PLAYER 3 WON...\n");
                    return(0);
                }
            }
            if(P3>100)
            {
                printf("OOPS! POSITION CAN NOT BE OBTAINED, PLEASE ROLL THE DICE AGAIN");
                P3=P3-dice;
                printf("Player 3 Position is %d",P3);
                break;
            }
            
             printf("Dice=%d\n Player 3 Position is %d",dice,P3);
            break;
        case (4):
            dice= dice_output();
            if (dice==6)
            {
                diceout6();
                dice = dice_output();
            }
            P4=P4+dice;
            if(P4<101)
            {
                for(i=0;i<7;i++)
                {
                    if(P4==Snake[i].start)
                    {
                        printf("OOPS! YOU CAUGHT A SNAKE.\n");
                        P4=Snake[i].end;
                    }
                    else if(P4==Ladder[i].start)
                        {
                            printf("SUPERB! YOU GOT A LADDER.\n");
                            P4= Ladder[i].end;
                        }
                }
            if (P4==100)
                {
                    printf("Dice=%d\n Player 4 Position is %d\n",dice,P1);
                    printf("BRAVO! PLAYER 4 WON...\n");
                    return(0);
                }
            }
            if(P4>100)
            {
                printf("OOPS! POSITION CAN NOT BE OBTAINED, PLEASE ROLL THE DICE AGAIN");
                P4=P4-dice;
                printf("Player 4 Position is %d",P4);
                break;
            }

             printf("Dice=%d\n Player 4 Position is %d",dice,P4);
            break;
        case (5):
        printf("YOU PRESSED '5', GAME IS SHUTTING DOWN.\n");
        return 0;
        default:
            printf("Incorrect Choice!\n");
            break;
        }
    }
    
}
