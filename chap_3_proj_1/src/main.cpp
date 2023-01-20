/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 3 | Project 1                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* One liter = 0.264179 gallons. Write a program that reads the consumed gasoline (L) by a car    */
/* and the distance (miles) that the car has traveled. Output the number miles per gallon the car */
/* has used. Your program must allow the user to repeat the calculation as many times as it want. */
/* Define a function to calculate the number of miles per gallon. Your program must               */
/* use a globally defined constant for the number of gallons per liter.                           */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main()
{
    double usedGasL = 0.0;
    double milesTraveled = 0.0;
    double avarege = 0.0;
    std::string continueAnswer = "";

    do{
        std::cout << "Type total used gas (L): ";
        std::cin >> usedGasL;
        std::cout << "Type total traveled distance (mi): ";
        std::cin >> milesTraveled;
        
        avarege = milesTraveled / calculator::LiterToGallon(usedGasL);
        
        printf("Avarage: %.2f mi/ga\n",avarege);

    }while(std::cout << "Calculate again? (yes/no) ", 
           std::cin >> continueAnswer, 
           continueAnswer == "yes");
    
    return 0;
}