#include "backend.h"
#include <cassert>

namespace backend{
    
    unsigned int SeatTable[LINE][ROW];
    unsigned int posID[2];

    void Init(){
        posID[2] = {0};
        
        for(unsigned int l = 0; l < LINE; l++){
            for(unsigned int r = 0; r < ROW; r++)
                SeatTable[l][r] = 0;
        }
    }
    
    bool isPositionFree(){
        ntfr::ConvertFrontPosToBackPos();
        return (SeatTable[posID[0]][posID[1]] == 0);
    }
    
    void fillPosition(){
        ntfr::ConvertFrontPosToBackPos();
        SeatTable[posID[0]][posID[1]] = 1; 
    }
}
