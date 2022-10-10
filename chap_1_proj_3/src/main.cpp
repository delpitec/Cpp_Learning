/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 1 | Project 3                                                                          */
/* Author: Rafael Del Pino                                                                        */
/* Workers at one particular company received a 7.6% raise backdated to six months.               */
/* Write a program that takes an employee's previous annual salary as input and presentation as   */
/* output the amount of retroactive pay due to the employee, the new annual salary, and the new   */
/* monthly salary. Use a variable declaration or const modifier to increase the pay increase.     */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main(int ac, char* av[])
{
    const double percentIncreacmake = 7.6;
    double salaryInput;

    cout << "Last year salary: ";
    cin >> salaryInput;

    printf("Total pending ammount: R$%.2f\n", (calculator::PercentValue(percentIncrease, salaryInput / 12) * 6));
    printf("New year salary: R$%.2f\n", salaryInput + (calculator::PercentValue(percentIncrease, salaryInput)));
    printf("New monthly salary: R$%.2f\n", (salaryInput + (calculator::PercentValue(percentIncrease, salaryInput))) / 12);

    return 0;
}
