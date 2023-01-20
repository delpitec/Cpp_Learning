/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 3 | Project 3                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Bla bla bla...                                                                                 */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

// Copied and adapted from chap_2_proj_1 example 
double EstimateValueAccordingToInflation(double currentValue, int inflationRate, int estimateYears){
    double estimateItemValue = currentValue;

    for (int i = 0; i < estimateYears; i++){
        estimateItemValue *= (1 + (inflationRate/100.0)); 
    }

    return estimateItemValue;
}

int main(){
    
    double oldPrice = 0.0;
    double newPrice = 0.0;
    double estimatedPrice = 0.0;
    int percent = 0;
    int estimateYears = 0;
    std::string continueAnswer = "";
      
    do{
        std::cout << "Type old price (R$): ";
        std::cin >> oldPrice;
        std::cout << "Type new price (R$): ";
        std::cin >> newPrice;
        printf("Type how many years from now should the estimate be: ");
        std::cin >> estimateYears; 
    
        percent = ((newPrice - oldPrice) / oldPrice)*(100);
        
        estimatedPrice = EstimateValueAccordingToInflation(oldPrice, percent, estimateYears);

        printf("Estimate value of: R$%.2f \n", estimatedPrice);

    }while(std::cout << "Calculate again? (yes/no) ", 
           std::cin >> continueAnswer, 
           continueAnswer == "yes");
    
    return 0;
}