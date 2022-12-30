/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 1 | Project 6                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* An employee receives R$16.78 for regular hours worked in a week. If that employee overtimes    */
/* worked hours, it must receive the extra hour at the same rate multiplied by 1.5.               */
/* From total amount (regular + extra) there are the following dicscounts: 6% by Social Security, */
/* 14%  by Federal Income Tax, 5% by state taxes, and R$10 a week for the Union and if the        */
/* employee has three or more dependents an additional R$35 tax to cover the extra cost of        */
/* health insurance. Write a program that reads the number of hours worked in a week and the      */
/* number of dependents as input and output the total amount payment of the employee, the amount  */
/* of each tax, and the remaining week salary after all discounts.                                */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main(int argc, char** argv)
{
    const double hourSalary = 16.78;
    const double overHourFactor = 1.5;
    const unsigned int regularWeeklyHours = 44;
    const unsigned int percentSocialSecurityTax = 6;
    const unsigned int percentFederalTax = 14;
    const unsigned int percentStateTax = 5;
    const unsigned int unionTax = 10;
    const unsigned int dependentsDiscount = 35;
    const unsigned int dependentsExtraTax = 3;
    
    double workedHours = 0.0;
    double socialSecurityDiscount = 0.0;
    double valueToBePaid = 0.0;
    unsigned int dependents = 0;

    std::cout << "Worked hours in the week: ";
    std::cin >> workedHours;
    std::cout << "Dependents quantity: ";
    std::cin >> dependents;
    
    // Payment
    valueToBePaid = regularWeeklyHours * hourSalary;
    if (workedHours > regularWeeklyHours){
        valueToBePaid += (workedHours - regularWeeklyHours) * (hourSalary * overHourFactor);
    }

    // Discount
    valueToBePaid -= calculator::PercentValue(percentSocialSecurityTax, valueToBePaid);
    valueToBePaid -= calculator::PercentValue(percentFederalTax, valueToBePaid);
    valueToBePaid -= calculator::PercentValue(percentStateTax, valueToBePaid);
    valueToBePaid -= unionTax;
    if (dependents >= dependentsExtraTax){
        valueToBePaid -= dependentsDiscount;
    }
    
    printf ("Value to be paid: R$%.2f\n", valueToBePaid);

}