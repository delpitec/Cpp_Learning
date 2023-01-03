/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 2 | Project 1                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* It is difficult to draw up a budget that spans several years because prices are not stable.    */
/* If your company needs 200 pencils a year, you can't just use the price of pencils this year    */
/* for a projection for two years from now due to inflation, which causes an increase in costs    */
/* compared to today. Write a program to estimate the expected cost of an item in a specified     */
/* number of years. The program asks for the current item cost, the number of years from now that */
/* the item will be purchased and the rate of inflation. Then, the program outputs the estimated  */
/* cost of each item after the specified period. The program must convert the percentage to a     */
/* fraction, like 0.056, and use a loop to estimate the inflation-adjusted price.                 */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main(int ac, char* av[])
{

    double pencilValue = 0.0;
    int estimateYears = 0;
    double inflationRate = 0.0;
    double estimatePencilValue = 0.0;

    printf("Type how much is the pencil unit (R$): ");
    std::cin >> pencilValue; 
    printf("Type how many years from now should the estimate be: ");
    std::cin >> estimateYears; 
    printf("Type the inflation rate (%%): ");
    std::cin >> inflationRate; 

    estimatePencilValue = pencilValue;

    for (int i = 0; i < estimateYears; i++){
        estimatePencilValue *= (1 + (inflationRate/100.0)); 
    }

    printf ("Estimate value for %d years is: R$%.2f\n", estimateYears, estimatePencilValue);

    return (0);
}