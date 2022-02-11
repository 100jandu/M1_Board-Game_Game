# Report
# **Requirements**

## Introduction

Snake and Ladder board game is very popular board game, is implemnted to play it virtually and to provide a fair chance to win for all players. The game has snakes and ladders, a dice numered from 1 to 6 is rolled to get a random number and the position of the player is get updated. If dice rolled out is 6, the player get an extra chance to roll the dice. If player encounters a snake, player is demoted to the respective tail of the snake. Similarly, if player encounters a ladder, player gets promoted to the other end of the ladder. Player is declared as winner as it reaches the score of 100. Have Fun!

## Variations

The sample of snake and ladder board game used is mentioned below. The pictoral position of each snake and ladder in the board game is shown below. 

![Sample Snake And Ladder](https://user-images.githubusercontent.com/98866279/153548351-de917484-5586-4d10-abac-2cedf1c39ff0.jpg)

    
  # SWOT Analysis
  
  ## Strengths
  
  * Relive the enjoyment people are leaving behind due to modern-days games. 
  * Can be played by people of any age group.
  * Helps children practice counting and adding.
  * Easy to design.
  
  ## Weakness
  * Large number of players make the game time consuming.
  * No measure is taken for playing limit may cause an addition to play this game.
 
 ## Opportunities
 
* The game can be further developed to make it more fun and interesting.
 
 ## Threats 
 
* Due to development of many digital games, ancient board games like "snakes and ladder" face the threat of extinction.
 
 # 4W's and 1H
  ## Who
  ---
  This game can be played by people of all age groups.
  ## What
  ---
  Digital implementation of an ancient game of snakes and ladders.
  ## When
  ---
  At times of having fun with family or fiends, to reduce stress and pressure and in learning stages for children.
  ## Where
  ---
  Any place with availability to keep the board and space to roll the dice.
  ## How
  ---
  A player rolls the dice and increases his pawn's position on the board till any of the player wins.
  # Detailed Requirements
  ## High level requirements
  |  ID|Description|Status|
  |---|---|---|
  | HR01 | User shall be able to read data from file | Implemented |
  | HR02 | User shall be able to modify the data in the file | Implemented |
  | HR03 | If the game is not working properly, should raise an issue | Future | 
  | HR04 | When a player wins, The game should print a message and exit the program | Implemented |
  | HR05 | The game shall correctly calculate and update the position values based on the roll | Implemented |
  ## Low level requirements
  |  ID|Description|Status|
  |---|---|---|
  | LR01 | Dice roll output must be in the range from 1 to 6. | Implemented |
  | LR02 | The Snakes and Ladder position must be mentioned. | Impemented|
  | LR03 | The game shall be open for development | Implemented. |
  | LR04 | Implementing more than 4 players in one game. | Future|
  
  # Architecture
# High Level 
## Behavioural diagram 
* ![Flow Chart drawio](https://user-images.githubusercontent.com/98866279/153229407-481a5246-1749-4f74-84cf-ad9ba73c3f21.png)

## Structure diagram
* ![Structural Diagram](https://user-images.githubusercontent.com/98866279/153231387-ea6ef964-1725-4a6f-a6c3-b1c3b6c29d96.png)

# Low Level

## Behavioural diagram

![SNL Position](https://user-images.githubusercontent.com/98866279/153552042-777d8abe-62b3-4aaf-9f95-ed16749a350c.jpg)

## Structure diagram

![Sample Snake And Ladder](https://user-images.githubusercontent.com/98866279/153552088-1cd9f7d2-14f3-4e11-9744-4f13c29dafdf.jpg)
  
  ## Test plan and test ouput


| Test ID | Description | Expected Input | Expected Output | Type of Test | Status |
|---|---|---|---|---|---|
| LTP01 | Test to check if dice output is always greater than 0 | random function | integer value greater than 0 | Technical | Pass|
|LTP02 | Test to check if dice output is always less than or equal to 6 | random function | integer values less than or equal to 6 | Technical  | Pass |
  
