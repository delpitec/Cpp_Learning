/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 4 | Project 3                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program that tells you how many coins to return for any amount from 1 to 99 cents.     */
/* For example: if the amount is 86 cents, the output would look something like this:             */
/* 86 cents can be provided as:                                                                   */
/* 3 of 25 cents                                                                                  */
/* 1 of 10 cents                                                                                  */
/* 1 of 1 cents                                                                                   */
/* Use denominations for 25 cent, 10 cent, and 1 cent coins. Do not use the 50 or 5 cents coins.  */
/* Your program will use the following function (among others):                                   */
/*        void CoinCalculator(int coinValue, int& coinQuantity, int& remainingAmount);            */
/*        // Precondition: 0 < coinValue < 100; 0 <= remainingAmount < 100.                       */
/*        // Postcondition: coinQuantity fixed as equal to maximum number                         */
/*        // of denomination coinValue cents that can be obtained                                 */
/*        // from remainingAmount cents that decreases by coinQuantity * coinValue.               */
/*                                                                                                */
/* Suppose the value of the variable remainingAmount is 86. Then, after next call, the value of   */
/* coinQuantity will be 3 and value of remainingAmount will be 11 (because if you take 75 out of  */
/* 86, there are 11 left): calculateCoins(25, coinQuantity, remainingAmount);                     */
/* Include a loop that allows the user to repeat this calculation for new input data until the    */
/* user wnats to close the program.                                                               */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main()
{
    int CoinQuantity = 0;
    int CoinValue = 0;
    int TotalValue = 0;
    int RemainingValue = 0;
    std::string continueAnswer = "";

    do{
        std::cout << "Type cents value to convert (0 ~ 99): ";
        std::cin >> TotalValue;
        RemainingValue = TotalValue;
        CoinValue = COIN_25_CENTS;

        while(RemainingValue > 0){
            //Pre-conditions
            assert(0 < CoinValue && CoinValue < 100);
            assert(0 <= RemainingValue && RemainingValue < 100);
            
            CoinCalculator(CoinValue, CoinQuantity, RemainingValue);
            
            printf("%d coins of %d cents\n", CoinQuantity,CoinValue);
            
            if(CoinValue == COIN_25_CENTS){
                CoinValue = COIN_10_CENTS;
            }
            else if(CoinValue == COIN_10_CENTS){
            CoinValue = COIN_01_CENTS; 
            }
            else{
                CoinValue = COIN_01_CENTS;
            }
        }
    }while(std::cout << "Convert again? (yes/no) ", 
           std::cin >> continueAnswer, 
           continueAnswer == "yes");

    return 0;
}