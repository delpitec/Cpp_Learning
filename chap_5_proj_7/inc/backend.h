#ifndef BACKEND_H
#define BACKEND_H
#include "ntfr.h"
#include "frontend.h"

    namespace backend{
        const unsigned int ROW = frontend::ROW - 1;
        const unsigned int LINE = 7;
        
        extern unsigned int SeatTable[LINE][ROW];
        extern unsigned int posID[2];

        void Init();
        bool isPositionFree();
        void fillPosition();
}

#endif