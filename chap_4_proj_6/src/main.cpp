/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 4 | Project 6                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program that combine the the two last programming projects (chap_4_proj_4 and          */
/* chap_4_proj_5) functions. The program asks the user if wants to convert feet and inches to     */
/* meters and centimeters or meters and centimeters to feet and inches.The user will type 1 or 2  */
/* according to desired convertion. The program reads the user's answer and executes the command  */
/* if-else. Each if-else branch statement will be a function call. The two functions called in    */
/* the if-else would have function configurations quite similar to the used on previous projects  */
/* Includes a loop that allows the user to repeat for new input data until the user it wants to   */
/* finish the program.                                                                            */
/*                                                                                                */
/* NOTE: The functions used on this project are the used on (chap_4_proj_4 and chap_4_proj_5)     */
/*       managed by CMake tool files                                                              */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include <iostream>
#include "calculator.h"
#include "input.h"
#include "../../chap_4_proj_4/inc/functions.h"
#include "../../chap_4_proj_5/inc/functions.h"

int main()
{
    int option = 0;
    std::string continueAnswer = "";
    double lenght = 0.0;
    
        do{
        ihm::input::ReadOnlyRange("Choose the convertion: (1) ft and in to m and cm or (2) m and cm to ft and in [1/2]: ", option, 1,2);
        ihm::input::ReadOnlyPositive("Type a lengh value: ", lenght);

        if (option == 1)
        {
            chap_4_proj_4::PrintResults(lenght, calculator::FeetToMeter(lenght), 
                                        calculator::FeetToCentimeter(lenght), 
                                        calculator::InchToMeter(lenght), 
                                        calculator::InchToCentimeter(lenght));
        }
        else
        {
            chap_4_proj_5::PrintResults(lenght,
                                        calculator::MeterToInch(lenght),
                                        calculator::MeterToFeet(lenght),
                                        calculator::CentimeterToInch(lenght),
                                        calculator::CentimeterToFeet(lenght));
        }
    }while(std::cout << "Convert again? (yes/no) ", 
           std::cin >> continueAnswer, 
           continueAnswer == "yes");
    
    return 0;
}