/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 4 | Project 8                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program that reads a weight in grams and kilograms and outputs the equivalent value in */
/* oz and lb. Use at least three functions: one for input, one or more for                        */
/* calculation, and one for the output. Include a loop that allows the user to repeat this        */
/* calculation for new input data until the user says he wants to terminate the program.          */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"
#include "input.h"

int main()
{
    double weight = 0.0;
    double OunceFromKilogram = 0.0;
    double PoundFromKilogram = 0.0;
    double OunceFromGram = 0.0;
    double PoundFromGram = 0.0;

    do{
        // Get weight value from keyboard input
        ihm::input::ReadOnlyPositive("Type a weight value: ", weight);
        
        // Convert values to variables
        OunceFromKilogram = calculator::KilogramToOunce(weight);
        PoundFromKilogram = calculator::KilogramToPound(weight);
        OunceFromGram = calculator::GramToOunce(weight);
        PoundFromGram = calculator::GramToPound(weight);

        // Print variables values
        PrintResults(weight, OunceFromKilogram, PoundFromKilogram, OunceFromGram, PoundFromGram);
    
        // Check if another convertion is desired
    }while(ihm::input::ReadStringAndConvertToBoolean("Convert again? (yes/no) ","yes","no"));

    return 0;
}