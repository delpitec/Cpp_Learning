/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 2 | Project 2                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* You have just purchased an equipment that costs R$ 1,000.00 through the following paymenten    */
/* plan: Entry: R$0.00, interest of 18% per year (and therefore 1.5% per month) and monthly       */
/* installments of R$ 50. The monthly installment of R$50 is used to pay the interest and the     */
/* remainder is used to pay part of the remaining amount.                                         */
/* So in the first month you pay 1.5% of R$1,000 in interest. That is R$15 with remaining value   */
/* of R$35 that is deducted from your debt and result in a new debt of R$965.00. In the next      */
/* month you'll pay interest of 1.5% on R$965.00 (R$14.48) so you can deduce R$35.52 which is     */
/* R$50.00 – R$ 14.48 of the sum you owe. Write a program that tells you how many months it will  */
/* take you to pay off what you owe, as well as the sum amount paid in interest. Use a loop to    */
/* calculate the sum paid in interest and the size of the debt each month. Your final program     */
/* does not need to provide the amount you pay monthly as interest. The last payment can be less  */
/* than R$50 if the debt is less, but don't forget the interest. If you owe R$50, then your       */
/* monthly installment of $50 will not settle your debt, although it will come close. One month's */
/* interest on $50 is only 75 cents.                                                              */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main(int ac, char* av[]){
    
    double openAmount = 0.0;
    double monthInterestAmount = 0.0;
    double monthlyInterest = 1.5;
    double totalInterestPaid = 0.0;
    double installment = 50.0;
    int i = 0;

    std::cout << "Type equipment value (R$): ";
    std::cin >> openAmount;

    std::cout << "Type monthly interest (%): ";
    std::cin >> monthlyInterest;

    std::cout << "Type installment (R$): ";
    std::cin >> installment;

    for(i = 0; openAmount > 0; i++){
        monthInterestAmount = calculator::PercentValue(1.5,openAmount);
        totalInterestPaid += monthInterestAmount;
        openAmount -= installment - monthInterestAmount;
    }

    printf("The total interest paid during %d months is: R$%.2f\n", i, totalInterestPaid);

    return (0);
}