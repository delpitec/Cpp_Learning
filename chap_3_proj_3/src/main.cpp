/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 3 | Project 3                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Improve the previous calculator (chap_3_proj_2) by making it also present the estimated item   */
/* price calculator 1 and 2 years after the time of calculation. The increase in cost in one year */
/* is estimated as the path rate multiplied by the price at the beginning of the year. Define a   */
/* second function to determine the cost of an item over a specified number of years, given the item's current price and inflation rate 
as arguments.                                                                                     */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

// Copied and adapted from chap_2_proj_1 example 
double EstimateValueAccordingToInflation(double currentValue, double inflationRate, int estimateYears){
    double estimateItemValue = currentValue;

    for (int i = 0; i < estimateYears; i++){
        estimateItemValue *= (1 + (inflationRate/100.0)); 
    }

    return estimateItemValue;
}

int InflationRate(double oldPrice, double newPrice){
    int ret = ((newPrice - oldPrice) / oldPrice)*(100);
    return ret;
}

int main(){
    
    double oldPrice = 0.0;
    double newPrice = 0.0;
    double percent = 0;
    std::string continueAnswer = "";

    do{    
        std::cout << "Type old price (R$): ";
        std::cin >> oldPrice;
        std::cout << "Type new price (R$): ";
        std::cin >> newPrice;
        
        percent = InflationRate(oldPrice, newPrice);

        printf("Inflation: %.1f%%\nEstimate value (1st year): R$%.2f\nEstimate value (2nd year): R$%.2f\n", 
                percent,
                EstimateValueAccordingToInflation(newPrice, percent, 1),
                EstimateValueAccordingToInflation(newPrice, percent, 2));
    }while(std::cout << "Calculate again? (yes/no) ", 
            std::cin >> continueAnswer, 
            continueAnswer == "yes");

    return 0;
}