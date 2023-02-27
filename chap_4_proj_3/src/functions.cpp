#include "functions.h"

void CoinCalculator(int coinValue, int& coinQuantity, int& remainingAmount){
    coinQuantity = remainingAmount / coinValue;
    remainingAmount = remainingAmount - (coinQuantity * coinValue);
}
