/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 4 | Project 10                                                                         */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program that combine the programming projects chap_4_proj_6 and chap_4_proj_9.         */
/* The program asks the user if wants to convert weight or lenght. If select weight the program   */
/* asks if the user wants to convert pound and ounce to gram and kilogram or gram and kilogram to */
/* pound and ounce. I select lenght the program asks if the user wants to convert feet and lenght */
/* to meter and centimeter or meter and centimeter to pound and ounce. The user will type 1 or 2  */
/* according to desired option. Each if-else branch statement will be a function call. The two    */
/* functions called in the if-else statement will have function definitions similar to the        */
/* programs in Programming chap_4_proj_6 and chap_4_proj_9. Note that your program will have      */
/* commands if-else statements inside if-else statements indirectly. The external if-else         */ 
/* statement will include two function calls as its two branches. These two function calls will   */
/* include an if-else statement. If you try to create a four-way branch you're probably on the    */
/* wrong way. You just need to think about two-way ramification (although the entire program      */
/* ultimately branches into four cases). Include a loop that allows the user to repeat this       */
/* calculation for new input data, until the user says that wants to close the program.           */
/*                                                                                                */
/* NOTE: The functions used on this project are the used on chap_4_proj_4, chap_4_proj_5,         */
/* chap_4_proj_7, chap_4_proj_8 managed by CMake tool files                                       */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include <iostream>
#include "calculator.h"
#include "input.h"
#include "../../chap_4_proj_4/inc/functions.h"
#include "../../chap_4_proj_5/inc/functions.h"
#include "../../chap_4_proj_7/inc/functions.h"
#include "../../chap_4_proj_8/inc/functions.h"

void CalculateWeight(void);
void CalculateLenght(void);

int main()
{
    int option = 0;
    std::string continueAnswer = "";
    double weight = 0.0;
    
    do{
        ihm::input::ReadOnlyRange("Choose the convertion: weight (1) or lenght (2). [1/2]: ", option, 1,2);

        if (option == 1){
            CalculateLenght();                                
        }
        else{
            CalculateWeight();
        }
    }while(ihm::input::ReadStringAndConvertToBoolean("Convert again? (yes/no) ","yes","no"));
    
    return 0;
}

void CalculateLenght(void){
    int option = 0;
    double lenght = 0.0;

    ihm::input::ReadOnlyRange("Choose the convertion: (1) ft and pol to m and cm or (2) kg and g to oz and lb [1/2]: ", option, 1,2);
    ihm::input::ReadOnlyPositive("Type a lenght value: ", lenght);

    if(option == 1){
        chap_4_proj_4::PrintResults(lenght, 
                                    calculator::FeetToMeter(lenght), 
                                    calculator::FeetToCentimeter(lenght), 
                                    calculator::InchToMeter(lenght), 
                                    calculator::InchToCentimeter(lenght));
    }
    else{
        chap_4_proj_5::PrintResults(lenght,
                                    calculator::MeterToInch(lenght),
                                    calculator::MeterToFeet(lenght),
                                    calculator::CentimeterToInch(lenght),
                                    calculator::CentimeterToFeet(lenght));
    }
}

void CalculateWeight(void){
    int option = 0;
    double weight = 0.0;
    
    ihm::input::ReadOnlyRange("Choose the convertion: (1) oz and lb to kg and g or (2) kg and g to oz and lb [1/2]: ", option, 1,2);
    ihm::input::ReadOnlyPositive("Type a weight value: ", weight);

    if(option == 1){
        chap_4_proj_7::PrintResults(weight, 
                                    calculator::OunceToKilogram(weight), 
                                    calculator::OunceToGram(weight), 
                                    calculator::PoundToKilogram(weight),
                                    calculator::PoundToGram(weight));
    }
    else{
        chap_4_proj_8::PrintResults(weight,
                                    calculator::KilogramToOunce(weight),
                                    calculator::KilogramToPound(weight),
                                    calculator::GramToOunce(weight),
                                    calculator::GramToPound(weight));
    }
}