/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 3 | Project 5                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program that asks for user height, weight and age  and calculates the size of clothes  */
/* according to the following formulas:                                                           */
/* ■ Hat size = weight in pounds divided by height in inches and all  multiplied by 2.9.          */
/* ■ Jacket size (chest in inches) = height multiplied weight divided by 288 and an adjustment    */
/*   made by an increment of one-eighth of an inch for every 10 years over 30. Note that the      */
/*   Adjustment only occurs after 10 full years. So there is no adjustment for ages 30 to 39,     */
/*   but a 1/8 inch is added for age 40).                                                         */
/* ■ Waist in inches = weight divided by 5.7 and an adjustment made by adding a tenth of a 1 inch */
/*   for every 2 years over age 28. (Note that the adjustment only takes place after 2 full years.*/
/*   So there is no adjustment for the 29 years, but a tenth of an inch is added for the 30 years.*/
/* Use functions for each calculation. Your program must allow the user to repeat this            */
/* calculation as many times as sometimes wish.                                                   */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main()
{      
    double height = 0.0;
    double weight = 0.0;
    unsigned int age = 0;
    std::string continueAnswer = "";

    double hat = 0.0;
    double coat = 0.0;
    double belt = 0.0;
    
    do{
        std::cout << "Type your height (m): ";
        std::cin >> height;
        std::cout << "Type your weight (kg): ";
        std::cin >> weight;
        std::cout << "Type your age: ";
        std::cin >> age;

        hat = HatSize(calculator::MeterToInch(height), calculator::GramToPound(weight*1000));
        coat = CoatSize(calculator::MeterToInch(height), calculator::GramToPound(weight*1000), age);
        belt = BeltSize(calculator::GramToPound(weight*1000), age);

        printf("Hat Size: %2.2f | Coat size: %2.2fin | Belt size: %2.2fin\n",hat, coat, belt);
    }while(std::cout << "Calculate again? (yes/no) ", 
           std::cin >> continueAnswer, 
           continueAnswer == "yes");
    
    return 0;
}