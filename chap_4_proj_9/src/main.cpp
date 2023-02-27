/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 4 | Project 9                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program that combine the the two last programming projects (chap_4_proj_7 and          */
/* chap_4_proj_8) functions. The program asks the user if wants to convert Pounds and Ounces to   */
/* Grams and Kilograms or Grams and Kilograms to Pounds and Ounces. The user will type 1 or 2     */
/* according to desired convertion. The program reads the user's answer and executes the command  */
/* if-else. Each if-else branch statement will be a function call. The two functions called in    */
/* the if-else would have function configurations quite similar to the used on previous projects  */
/* Includes a loop that allows the user to repeat for new input data until the user it wants to   */
/* finish the program.                                                                            */
/*                                                                                                */
/* NOTE: The functions used on this project are the used on (chap_4_proj_7 and chap_4_proj_8)     */
/*       managed by CMake tool files                                                              */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include <iostream>
#include "calculator.h"
#include "input.h"
#include "../../chap_4_proj_7/inc/functions.h"
#include "../../chap_4_proj_8/inc/functions.h"

int main()
{
    int option = 0;
    std::string continueAnswer = "";
    double weight = 0.0;
    
        do{
        ihm::input::ReadOnlyRange("Choose the convertion: (1) oz and lb to kg and g or (2) kg and g to oz and lb [1/2]: ", option, 1,2);
        ihm::input::ReadOnlyPositive("Type a weight value: ", weight);

        if (option == 1){
            // Print variables values as chap_4_proj_7
            chap_4_proj_7::PrintResults(weight, 
                                        calculator::OunceToKilogram(weight), 
                                        calculator::OunceToGram(weight), 
                                        calculator::PoundToKilogram(weight),
                                        calculator::PoundToGram(weight));
        }
        else{
            // Print variables values as chap_4_proj_7
            chap_4_proj_8::PrintResults(weight,
                                        calculator::KilogramToOunce(weight),
                                        calculator::KilogramToPound(weight),
                                        calculator::GramToOunce(weight),
                                        calculator::GramToPound(weight));
        }

    }while(std::cout << "Convert again? (yes/no) ", 
           std::cin >> continueAnswer, 
           continueAnswer == "yes");
    
    return 0;
}