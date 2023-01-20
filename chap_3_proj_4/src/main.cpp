/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 3 | Project 4                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* The gravitational attraction force between two bodies with masses m1 and m2, separated by a    */
/* distance d, is given by the following equation:                                                */
/*                                                                                                */
/*      F = (G * m1 * m2)/(d^2) [g*cm/sec^2]                                                      */
/*                                                                                                */
/*      Universal gravitation constant:                                                           */
/*      G = 6.673 * 10^(-8)     [cm^3/(g*sec^2)]                                                  */
/*                                                                                                */
/* Write a function definition that takes arguments for the bodies masses and the distance        */
/* between them and provide the gravitational force between them. As you will use the formula     */
/* above, the gravitational force will be given in dynes. A dyne is equal to (g*cm)/cm^2          */
/* You must use a global constant for the universal gravitation constant. Enter your definition   */
/* function in a complete program that calculates the gravitational force between two objects     */
/* with data from suitable entry. Your program must allow the user to repeat this calculation as  */
/* many times as desired.                                                                         */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

const double UNIV_GRAVITATIONAL_CONS = 6.673*pow(10,-8); 

double GravitationalForce(double m1, double m2, double distance){
    return (UNIV_GRAVITATIONAL_CONS*m1*m2)/pow(distance,2);
} 

int main()
{
    double mass1 = 0.0;
    double mass2 = 0.0;
    double distance = 0.0;
    double force = 0.0;
    std::string continueAnswer = "";

    do{   
        std::cout << "Type mass 1 (g): ";
        std::cin >> mass1;
        std::cout << "Type mass 2 (g): ";
        std::cin >> mass2;
        std::cout << "Type distance between the points (cm): ";
        std::cin >> distance;
        
        force = GravitationalForce(mass1,mass2,distance);
        
        printf("Gravitacional force is: %4.3e g*cm/sec²\n", force);
            
    }while(std::cout << "Calculate again? (yes/no) ", 
           std::cin >> continueAnswer, 
           continueAnswer == "yes");

    return 0;
}