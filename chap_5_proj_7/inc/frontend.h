#ifndef FRONTEND_H
#define FRONTEND_H

#include "ntfr.h"

namespace frontend{

    const unsigned int ROW = 5;
    const unsigned int LINE = 7;
    
    extern char SeatTable[LINE][ROW];
    extern char posID[2];

    void Init();
    void PrintTable();
    void PrintOKFeedback();
    void PrintNGFeedback();
    bool isDesiredNewPosition();
    void UpdateValues();
}

#endif