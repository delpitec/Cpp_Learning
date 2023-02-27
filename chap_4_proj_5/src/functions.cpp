#include "functions.h"

namespace chap_4_proj_5
{
    void PrintResults(double len, double in_from_m, double ft_from_m, double in_from_cm, double ft_from_cm){
        printf("%0.2f  m is equal to %0.2f in\n"
            "%0.2f  m is equal to %0.2f ft\n"
            "%0.2f cm is equal to %0.2f in\n"
            "%0.2f cm is equal to %0.2f ft\n", 
            len, in_from_m, 
            len, ft_from_m,
            len, in_from_cm, 
            len, ft_from_cm);
    }
}