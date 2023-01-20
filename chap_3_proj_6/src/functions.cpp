#include "functions.h"

void PrintAverageDeviationAndStandardDeviation(double avg, double n1, double n2, double n3, double n4){
    double averageDeviation = calculator::AverageDeviation(avg,n1,n2,n3,n4);
    double standardDeviation = calculator::StandardDeviation(avg,n1,n2,n3,n4); 
    printf("Average deviation: %.2f \nStadard deviation: %.2f\n", averageDeviation, standardDeviation);
}