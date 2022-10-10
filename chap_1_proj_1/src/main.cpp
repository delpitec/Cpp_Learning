/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 1 | Project 1                                                                          */
/* Author: Rafael Del Pino                                                                        */
/* Read a cereal breakfast packet weight in ounces and and displays the weight in tons as         */
/* well as the number of packets is necessary to produce a cereal tonne.                          */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

using namespace std;

// Aux function to find packates per tons
double PackageQuantityCalculator(double ouncePerPacket){
    const double AToneIsThisValueOunces = 35273.92;
    return AToneIsThisValueOunces/ouncePerPacket;
}

int main(int ac, char* av[])
{
    double weight = 0.0;
    
    cout << "Write packet weight in ounces: ";
    cin >> weight;   
    printf("Each package has %.2f tons.\n", calculator::OunceToTonne(weight));
    printf("One ton has %.2f packages.\n", PackageQuantityCalculator(weight));

    return 0;
}
