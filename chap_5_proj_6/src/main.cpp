/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 5 | Project 6                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* bla bla bla                                                                                    */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"
#include "aux.h"

using namespace std;

int main()
{
   char boardgame[] = {'1','2','3',
                       '4','5','6',
                       '7','8','9'};
   game state = ASK_POSITION;
   int position = 0;
   int player = 1;
   
   while(state != END_GAME){
      if(state == ASK_POSITION){
         PrintBoardGame(boardgame);
         cout << "Player " << player << ": Choose a valid position (1~9): ";
         cin >> position;
         state = CHECK_POSITION;
      }
      else if(state == CHECK_POSITION){
         if(!isFreePosition(boardgame, position)){
            ihm::output::PrintOnConsoleMessageLn("Wrong position!");
            state = ASK_POSITION;
         }
         else{
            FillPosition(boardgame, position, player);
            state = CHECK_GAME_STATE;
         }
      }
      else if(state == CHECK_GAME_STATE){
            if(Winner(boardgame) == 0){
               SwapPlayer(player);
               state = ASK_POSITION;  
            }
            else if(Winner(boardgame) == 1 || Winner(boardgame) == 2){
               state = SHOW_RESULT_WINNER;
            }
            else{
               state = SHOW_RESULT_TIE;
            }
      }
      else if(state == SHOW_RESULT_WINNER){
         ihm::output::PrintOnConsoleNumberLn("The winner is player ", player);
         PrintBoardGame(boardgame);
         state = END_GAME;
      }
      else if(state == SHOW_RESULT_TIE){
         ihm::output::PrintOnConsoleMessageLn("Tie");
         PrintBoardGame(boardgame);
         state = END_GAME;
      }
   }   
   return 0;
}