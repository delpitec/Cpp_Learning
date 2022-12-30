/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 1 | Project 4                                                                          */
/* Author: Rafael Del Pino                                                                        */
/* Installments payment is a kind of bank loan. For example: a nominal loan of R$1,000.00         */
/* with 15% of interest rate and 18 months duration. The interest amount is calculated by         */
/* 1000 * 0.15 = R$150. This result is multiplied by 1.5 years period resulting R$225 as total    */
/* interest due. This amount is immediately deducted from loan, leaving the costumer with a       */
/* total amount of R$775. The costumer will need to pay monthly the nominal loan value of         */
/* R$1,000.00 divided by 18 (R$55.56). Write a program that will need three inputs: the amount    */
/* the consumer needs to receive, the interest rate, and the loan duration in months.             */
/* Calculate the loan nominal value required for the consumer to receive the required quantity.   */
/* It should also calculate the monthly payment.                                                  */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main(int argc, char** argv)
{

    float loan = 0.0;
    float nominalLoan = 0.0;
    float interestDebt = 0.0;
    float interestRate = 0.0;
    float yearsLoanDuration = 0.0;
    float refound = 0.0;
    float monthlyRefound = 0.0;
    unsigned int monthsLoanDuration = 0;

    std::cout << "Total amount need(R$): ";
    std::cin >> nominalLoan;
    std::cout << "Loan interest rate(%): ";
    std::cin >> interestRate;
    std::cout << "Loan duration (months): ";
    std::cin >> monthsLoanDuration;
    
    yearsLoanDuration = monthsLoanDuration / 12.0;
    interestDebt = nominalLoan * (interestRate / 100.0) * yearsLoanDuration;
    refound = nominalLoan - interestDebt;
    loan = (nominalLoan * nominalLoan) / refound;
    monthlyRefound = loan / monthsLoanDuration;
    
    printf("If you need to receive R$%.2f then you will need to order a R$%.2f nominal loan and refound in %d installments of R$%.2f.\n", nominalLoan, loan, monthsLoanDuration, monthlyRefound);

}