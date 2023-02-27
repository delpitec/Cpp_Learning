/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 4 | Project 1                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program that converts from 24-hour notation to 12-hour notation. For example, the      */
/* program should convert 14:25 to 2:25 P.M. The input is given in two integers. There must be at */
/* least three functions: one for the input, one for the conversion and one for the output. The   */
/* information A.M./P.M. is a value of type char, 'A' for A.M. and 'P' for P.M.                   */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main(){
    
    unsigned int hour = 0;
    unsigned int minute = 0;
    char period = '0';
    std::string continueAnswer = "";

    do{
        GetInput(hour, minute);
        calculator::Time24hTo12h(hour,minute,period);
        Print12hFormat(hour,minute,period);
    }while(std::cout << "Convert again? (yes/no) ", 
           std::cin >> continueAnswer, 
           continueAnswer == "yes");
    
    return (0);
}