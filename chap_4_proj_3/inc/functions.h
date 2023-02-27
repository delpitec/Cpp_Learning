#include <iostream>

enum {
    COIN_25_CENTS = 25,
    COIN_10_CENTS = 10,
    COIN_01_CENTS =  1
};

void CoinCalculator(int coinValue, int& coinQuantity, int& remainingAmount);