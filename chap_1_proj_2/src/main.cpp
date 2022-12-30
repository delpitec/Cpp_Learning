/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 1 | Project 2                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* A government research laboratory concludes that an artificial sweetener commonly used in       */
/* diet soda causes the death of laboratory rats. You have a friend on a diet who can't stop      */
/* drinking soda. Your friend wants to know how much diet soda is possible to drink without dying.*/
/* Write a program to give this answer. The input data will be amount of artificial sweetener     */
/* needed to kill a mouse, the weight of the mouse, and the weight of the person in diet. To      */
/* ensure your friend's safety, make the program require the weight at which he want to have,     */
/* instead of the current weight. Assume that diet soda contains 0.1% of artificial sweetener.    */
/* Use a variable declaration with the const modifier to name this value.                         */
/* You may want to express the percentage as the double value 0.001.                              */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
    // 0.1%
    const float REFRIGERANT_SWEETENER_PERCENT = 0.001;
    
    float ratWeight = 0.0;
    float sweetenerFatalAmountRat = 0.0;
    float personTargetWeight = 0.0;
    float sweetenerFatalAmountPerson = 0.0;
    float refrigerantAmountPermited = 0.0;
    
    printf("Type rat weight (g): ");
    cin >> ratWeight;
    
    printf("Type fatal sweetener amount to a %.2f g rat (ml): ", ratWeight);
    cin >> sweetenerFatalAmountRat;
    
    printf("Type person target weight (kg): ");
    cin >> personTargetWeight;
    
    sweetenerFatalAmountPerson = ((personTargetWeight * 1000.0) * sweetenerFatalAmountRat) / ratWeight;
    refrigerantAmountPermited = sweetenerFatalAmountPerson / REFRIGERANT_SWEETENER_PERCENT;

    // Convert from ml to L
    refrigerantAmountPermited /= 1000.0;

    printf("A %.2f kg person can drink a total soda amount of %.2f L\n", personTargetWeight, refrigerantAmountPermited);    

    return 0;
}