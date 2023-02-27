#include "functions.h"

namespace chap_4_proj_7
{
    void PrintResults(double wei, double kg_from_oz, double g_from_oz, double kg_from_lb, double g_from_lb)
    {
        printf("%0.2f oz ft is equal to %0.2f kg\n"
            "%0.2f oz is equal to %0.2f g\n"
            "%0.2f lb is equal to %0.2f kg\n"
            "%0.2f lb is equal to %0.2f g\n", 
            wei, kg_from_oz, 
            wei, g_from_oz,
            wei, kg_from_lb, 
            wei, g_from_lb);
    }
}