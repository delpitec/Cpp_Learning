#include "functions.h"

namespace chap_4_proj_8
{
    void PrintResults(double wei, double oz_from_kg, double lb_from_kg, double oz_from_g, double lb_from_g)
    {
        printf("%0.2f kg is equal to %0.2f oz\n"
            "%0.2f kg is equal to %0.2f lb\n"
            "%0.2f g is equal to %0.2f oz\n"
            "%0.2f g is equal to %0.2f lb\n", 
            wei, oz_from_kg, 
            wei, lb_from_kg,
            wei, oz_from_g, 
            wei, lb_from_g);
    }
}