/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 4 | Project 4                                                                          */
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
    double meterFromFeet = 0.0;
    double centimeterFromFeet = 0.0;
    double meterFromIn = 0.0;
    double centimeterFromIn = 0.0;
    
    ihm::input::ReadOnlyPositive("Type a lengh value: ", lenght);
    
    meterFromFeet = calculator::FeetToMeter(lenght);
    centimeterFromFeet = calculator::FeetToCentimeter(lenght);
    meterFromIn = calculator::InchToMeter(lenght);
    centimeterFromIn = calculator::InchToCentimeter(lenght);

    PrintResults(lenght, meterFromFeet, centimeterFromFeet, meterFromIn, centimeterFromIn);

    return 0;
}