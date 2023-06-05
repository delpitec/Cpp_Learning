#include "aux.h"

void PrintBoardGame(char boardgame[]){
   printf("\n %c | %c | %c\n---+---+---\n %c | %c | %c\n---+---+---\n %c | %c | %c\n\n",
          boardgame[0], boardgame[1], boardgame[2],
          boardgame[3], boardgame[4], boardgame[5],
          boardgame[6], boardgame[7], boardgame[8]);
}



void SwapPlayer(int& player){
    if(player == 1){
        player = 2;
    }
    else if(player == 2){
        player = 1;
    }
}

bool isFreePosition(char boardgame[], int position){
    bool ret = false;
    
    if (boardgame[position - 1] == 'x' || boardgame[position - 1] == 'o'){
        ret = false;
    }
    else{
        ret = true;
    }
    
    return ret;
}

void FillPosition(char boardgame[], int position, int player){
    if(player == 1){
        boardgame[position - 1] = 'x';
    }
    else if(player == 2){
        boardgame[position - 1] = 'o';
    }
}

int Winner(char boardgame[]){
   const int line1[] = {0,1,2};
   const int line2[] = {3,4,5};
   const int line3[] = {6,7,8};
   const int row1[]  = {0,3,6};
   const int row2[]  = {1,4,7};
   const int row3[]  = {2,5,8};
   const int diag1[] = {0,4,8};
   const int diag2[] = {2,4,6};
   const int* POSSIBLE_GAMES[] = {line1, line2, line3,row1, row2, row3, diag1, diag2};  
   int ret = 0;
   
   // look for a winner
    for(int i = 0; i < sizeof(POSSIBLE_GAMES)/sizeof(POSSIBLE_GAMES[0]); i++){
        if(boardgame[POSSIBLE_GAMES[i][0]] == boardgame[POSSIBLE_GAMES[i][1]] && 
            boardgame[POSSIBLE_GAMES[i][1]] == boardgame[POSSIBLE_GAMES[i][2]]){
            if(boardgame[POSSIBLE_GAMES[i][0]] == 'x'){
                ret = 1;
            }
            else{
                ret = 2;
            }
       }
    }
    
    // look for a tie
    for(int i = 0; i < sizeof(POSSIBLE_GAMES)/sizeof(POSSIBLE_GAMES[0]); i++){
        if((boardgame[POSSIBLE_GAMES[i][0]] == 'x' || boardgame[POSSIBLE_GAMES[i][0]] == 'o') && 
           (boardgame[POSSIBLE_GAMES[i][1]] == 'x' || boardgame[POSSIBLE_GAMES[i][1]] == 'o') &&
           (boardgame[POSSIBLE_GAMES[i][2]] == 'x' || boardgame[POSSIBLE_GAMES[i][2]] == 'o'))
        {
            if(i == 7){
                ret = 3;
            }
        }
        else{
            break;
        }
    }

   return ret;
}