#include "functions.h"

namespace chap_4_proj_4
{
    void PrintResults(double len, double m_from_ft, double cm_from_ft, double m_from_in, double cm_from_in)
    {
        printf("%0.2f ft is equal to %0.2f m\n"
            "%0.2f ft is equal to %0.2f cm\n"
            "%0.2f in is equal to %0.2f m\n"
            "%0.2f in is equal to %0.2f cm\n", 
            len, m_from_ft, 
            len, cm_from_ft,
            len, m_from_in, 
            len, cm_from_in);
    }
}