#include "frontend.h"
#include "input.h"
#include "output.h"
#include <iostream>

namespace frontend{

    char SeatTable[LINE][ROW];
    char posID[2];

    void Init(){
        posID[2] = {0};
        
        for(unsigned int l = 0; l < LINE; l++){
            for(unsigned int r = 0; r < ROW; r++)
                if(r == 0){
                    SeatTable[l][r] = l + 1 + 48;
                }
                else{
                    SeatTable[l][r] = r + 64;  
                }
        }
    }
    
    void PrintTable(){
        ntfr::ConvertTable();
        for(unsigned int l = 0; l < LINE; l++){
            for(unsigned int r = 0; r < ROW; r++){
                printf("%c ",SeatTable[l][r]);
            }
            ihm::output::PrintOnConsoleLn();
        }
        ihm::output::PrintOnConsoleLn();
    }

    void PrintOKFeedback(){
        ihm::output::PrintOnConsoleMessageLn("Request registered successfully");
    }

    void PrintNGFeedback(){
        ihm::output::PrintOnConsoleMessageLn("Request NOT registered. Seat is busy!");
    }

    bool isDesiredNewPosition(){
        return ihm::input::ReadStringAndConvertToBoolean("Do you desire new seat? (yes/no): ", "yes", "no");
    }

    void UpdateValues(){
        ihm::input::ReadUntilSizeOrEndChar("Choose your seat: ", posID, 2, 0);
    }
}