
#include "ntfr.h"
#include "frontend.h"
#include "backend.h"
#include <cassert>

namespace ntfr{
    void ConvertFrontPosToBackPos(){
        assert(frontend::posID[0] > 48 && frontend::posID[0] < 58);
        assert((frontend::posID[1] > 64 && frontend::posID[1] < 69) || 
               (frontend::posID[1] > 96 && frontend::posID[1] < 101));
        
        backend::posID[0] = frontend::posID[0] - 49;
        
        if(backend::posID[1] > 69){
            backend::posID[1] = frontend::posID[1] - 65;
        }
        else{
            backend::posID[1] = frontend::posID[1] - 97;
        }
    }
    
    void ConvertTable(){
        for(unsigned int l = 0; l < backend::LINE; l++){
            for(unsigned int r = 0; r < backend::ROW; r++){
                if(backend::SeatTable[l][r] == 1)
                    frontend::SeatTable[l][r+1] = 'X';
            }
        }
    }
}