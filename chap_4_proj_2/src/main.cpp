/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 4 | Project 2                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Triangle area can be calculated using Heron's formula:                                         */
/*   area = sqrt((s-a)*(s-b)*(s-c))                                                               */
/*   s = (a + b + c) / 2                                                                          */
/*   [a, b, c = integers]                                                                         */
/* Write a void function that takes five parameters: three parameters called by value that        */
/* provides the sides measures  and two parameters called by reference that calculate the area    */
/* and perimeter. Make your function robust. Note that not all combinations of a, b, c produce    */
/* a triangle. Your function should correct results for legal data and consistent results for     */
/* illegal combinations.                                                                          */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main()
{
    unsigned int side1 = 0;
    unsigned int side2 = 0;
    unsigned int side3 = 0;    
    double area = 0.0;
    unsigned int perimeter = 0;

    // Terminal input
    std::cout << "Type 1st side value: ";
    std::cin >> side1;
    std::cout << "Type 2nd side value: ";
    std::cin >> side2;
    std::cout << "Type 3rd side value: ";
    std::cin >> side3;

    // Calculator
    TriangleCalculator(area, perimeter, side1, side2, side3);
    
    // Terminal output
    printf("A triangle with side {a = %d ; b = %d ; c: %d} has:\n"
            "Perimeter: %d ; Area: %.2f\n", side1, side2, side3, perimeter, area);
    
    return 0;
}