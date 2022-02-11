#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"D:\LTTs Documents\Submitty assignments\M1_Board-Game_Game\3_Implementation\inc\dice1.h"


struct sandl
{
    int init_pos;
    int end_pos;
};



int main ()
{
  char ch;

  int diceout,player1=0,player2=0,i;

  struct sandl snake[10]={{25,9},{43,4},{56,8},{65,40},{73,15},{84,58},{99,1}};

    struct sandl ladder[10]={{5,23},{13,42},{20,59},{52,72},{60,83},{70,93}};

  printf
    ("                          **WECOME TO SNAKES AND LADDERS**        \n");

  printf ("\t\t\t\tInstructions                   \n\n");

  printf
    ("-> Snakes:- 25 to 9,\t 43 to 4,\t 56 to 8,\t 65 to 40,\t 73 to 15,\t 84 to 58,\t 99 to  1.\n");

  printf
    ("-> Ladders:- 5 to 23,\t 13 to 42,\t 20 to 59,\t 52 to 72,\t 60 to 83,\t 70 to 93,\t 75 to 90\n");

  printf
    ("-> Maximum of two players can play and the player reaching 100 first wins the game.\n");

  printf
    ("-> A player rolling a 6 will get an another chance\n\n");

  printf
    ("                                  **LET'S play**                     \n\n");


  while(1)  
  { printf ("choose player1 or player2:type 1,2 or 3 to select the options\n");

    printf ("1. Player 1\n");

    printf ("2. Player 2\n");

    printf ("3. exit\n");

    printf
    ("---------------------------------------------------------------------------------------------------------------\n");

    scanf("%s",&ch);


    switch(ch)
    { 
        case '1':
            system("cls");

            diceout = dice_output();

            if(diceout==6)
            {
              diceout6();
            }

            player1=player1+diceout;

            if(player1<101)
             {
               for(i=0;i<7;i++)
               {
                 if(player1==snake[i].init_pos)
                 {
                   printf("OOPS! YOU CAUGHT A SNAKE\n\n");

                    player1=snake[i].end_pos;
                 }
                 else if(player1==ladder[i].init_pos)
                 {
                   printf("BINGO! YOU GOT A LADDER\n\n");

                      player1=ladder[i].end_pos;
                 }
               }
             }
             else
             {
               player1=100;

               printf("Congratulations! Player1 wins.....\n\n");

               printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n", diceout,player1,player2);

               return(0);
             }
             printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n\n", diceout,player1,player2);

             break;
        case '2':
             system("cls");

            diceout = dice_output();

           if(diceout==6)
           {
             diceout6();
           }
            player2=player2+diceout;

            if(player2<101)
             {
               for(i=0;i<7;i++)
               {
                 if(player2==snake[i].init_pos)
                 {
                   printf("OOPS! YOU CAUGHT A SNAKE\n\n");

                    player2=snake[i].end_pos;
                 }
                 else if(player2==ladder[i].init_pos)
                 {
                   printf("BINGO! YOU GOT A LADDER\n\n");

                      player2=ladder[i].end_pos;
                 }
               }
             }
             else
             {
               player2=100;

               printf("Congratulations! Player2 wins.....\n\n");

               printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n\n", diceout,player1,player2);

               return(0);
             }
             printf ("ROLL=%d\t player1_position=%d\t player2_position=%d\n\n", diceout,player1,player2);
             break;
        case '3':
            exit(0);
            break;
        default:
            system("cls");
            printf("Incorrect choice!\n\n");
    }
  }
}

