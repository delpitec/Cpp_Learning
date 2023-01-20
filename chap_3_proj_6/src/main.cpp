/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 3 | Project 6                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a function that calculates the average and standard deviation of four scores.            */
/* The standard deviation is defined as the square root of the mean of the four values: (si - a)² */
/* where 'a' is the average value of the four scores. The function will have six parameters and   */
/* will call two other functions. Insert the function into a program that allows you to test the  */
/* function over and over again until you tell the program that you are finished.                 */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main()
{   
    
    double S1 = 0.0;
    double S2 = 0.0;
    double S3 = 0.0;
    double S4 = 0.0;
    std::string continueAnswer = "";

    do{
        std::cout << "Type fist value....: ";
        std::cin >> S1;
        std::cout << "Type second value..: ";
        std::cin >> S2;
        std::cout << "Type third value...: ";
        std::cin >> S3;
        std::cout << "Type fourth value..: ";
        std::cin >> S4;

        double avarage = calculator::Average(S1,S2,S3,S4);

        PrintAverageDeviationAndStandardDeviation(avarage,S1, S2, S3, S4);

    }while(std::cout << "Calculate again? (yes/no) ", 
           std::cin >> continueAnswer, 
           continueAnswer == "yes");
    

    return 0;
}