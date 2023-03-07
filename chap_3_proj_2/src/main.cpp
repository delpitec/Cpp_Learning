/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 3 | Project 2                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program to measure the rate of inflation last year. The program asks for an item       */
/* price of a in the past year and today. Estimate the rate of inflation as the difference in     */
/* price divided by last year's price. Your program must allow the user repeat this calculation   */
/* as many times as desired. Define a function to calculate the inflation rate. The fee of        */
/* inflation must be a value of type double, giving the rate as a percentage, for example 5.3%.   */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main(){
    
    double oldPrice = 0.0;
    double newPrice = 0.0;
    int percent = 0;
    std::string continueAnswer = "";

    do{    
        std::cout << "Type old price (R$): ";
        std::cin >> oldPrice;
        std::cout << "Type new price (R$): ";
        std::cin >> newPrice;
        
        percent = ((newPrice - oldPrice) / oldPrice)*(100);
        
        std::cout << "Inflation: " << percent << "%" << std::endl;
    }while(std::cout << "Calculate again? (yes/no) ", 
            std::cin >> continueAnswer, 
            continueAnswer == "yes");

    return 0;
}