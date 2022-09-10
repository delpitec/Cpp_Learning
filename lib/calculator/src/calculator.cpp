#include "calculator.h"

namespace calculator{

    double OunceToTonne(double ounce){
        const double AToneIsThisValueOunces = 35273.92;

        return ounce/AToneIsThisValueOunces;
    }

    double PercentValue(double percent, double value){
        return (percent*value)/100;
    }
}