#include "calculator.h"

namespace calculator{

    /// @brief      : Return convertion value from Ounce to Tonne
    /// @param ounce: will convert to tonne
    /// @return     : Converted tonne value of ounce parameter
    double OunceToTonne(double ounce){
        const double AToneIsThisValueOunces = 35273.92;

        return ounce/AToneIsThisValueOunces;
    }

    /// @brief        : Calculates percent amount of value
    /// @param percent: Percent of value
    /// @param value  : Value that it wants to know the percent amount
    /// @return       : Return the percent amount of value
    double PercentValue(double percent, double value){
        return (percent*value)/100;
    }
}