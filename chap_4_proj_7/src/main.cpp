/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 4 | Project 7                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program that reads a weight in lb and oz and outputs the equivalent value in           */
/* grams and kilograms. Use at least three functions: one for input, one or more for              */
/* calculation, and one for the output. Include a loop that allows the user to repeat this        */
/* calculation for new input data until the user says he wants to terminate the program.          */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"
#include "input.h"

int main()
{
    double weight = 0.0;
    double kilogramFromPound = 0.0;
    double gramFromPound = 0.0;
    double kilogramFromOunce = 0.0;
    double gramFromOunce = 0.0;

    do{
        // Get weight value from keyboard input
        ihm::input::ReadOnlyPositive("Type a weight value: ", weight);
        
        // Convert values to variables
        kilogramFromPound = calculator::PoundToKilogram(weight);
        gramFromPound = calculator::PoundToGram(weight);
        kilogramFromOunce = calculator::OunceToKilogram(weight);
        gramFromOunce = calculator::OunceToGram(weight);

        // Print variables values
        PrintResults(weight, kilogramFromOunce, gramFromOunce, kilogramFromPound, gramFromPound);
    
        // Check if another convertion is desired
    }while(ihm::input::ReadStringAndConvertToBoolean("Convert again? (yes/no) ","yes","no"));

    return 0;
}