/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 4 | Project 5                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program that reads a length in feet and inches and outputs the equivalent value in     */
/* meters and centimeters. Use at least three functions: one for input, one or more for           */
/* calculation, and one for the output. Include a loop that allows the user to repeat this        */
/* calculation for new input data until the user says he wants to terminate the program.          */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"
#include "input.h"

int main()
{
    double lenght = 0.0;
    double inFromMeter = 0.0;
    double feetFromMeter = 0.0;
    double inFromCentimeter = 0.0;
    double feetFromCentimeter = 0.0;
    std::string continueAnswer = "";

    do{
        ihm::input::ReadOnlyPositive("Type a lengh value: ", lenght);

        inFromMeter = calculator::MeterToInch(lenght);
        feetFromMeter = calculator::MeterToFeet(lenght);
        inFromCentimeter = calculator::CentimeterToInch(lenght);
        feetFromCentimeter = calculator::CentimeterToFeet(lenght);

        PrintResults(lenght, inFromMeter, feetFromMeter, inFromCentimeter, feetFromCentimeter);
    }while(std::cout << "Convert again? (yes/no) ", 
           std::cin >> continueAnswer, 
           continueAnswer == "yes");

    return 0;  
}
