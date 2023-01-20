#include "calculator.h"

namespace calculator{

    /// @brief      : Return convertion value from Ounce to Tonne
    /// @param ounce: Will convert to tonne
    /// @return     : Converted Tonne value from Ounce parameter
    double OunceToTonne(double ounce){
        const double ONE_TONE_IN_OUNCE = 35273.92;
        return ounce/ONE_TONE_IN_OUNCE;
    }

    /// @brief      : Return convertion value from Pound to Gram
    /// @param pound: Will convert to tonne
    /// @return     : Converted Gram value from Pound parameter
    double PoundToGram(double pound){
        const double ONE_POUND_IN_GRAM = 453.6;
        return pound * ONE_POUND_IN_GRAM;       
    }

    /// @brief     : Return convertion value from Gram to Pound
    /// @param gram: Will convert to Pound
    /// @return    : Converted Pound value from Gram parameter
    double GramToPound(double gram){
        const double ONE_POUND_IN_GRAM = 453.6;
        return gram/ONE_POUND_IN_GRAM;
    }

    
    /// @brief      : Return convertion value from Meter to Inch
    /// @param meter: Will convert to Inch
    /// @return     : Converted Inch value from Meter parameter
    double MeterToInch(double meter){
        const double ONE_METER_IS_INCH = 39.3701;
        return meter * ONE_METER_IS_INCH;       
    }

    /// @brief      : Return convertion value from Liter to Gallon
    /// @param liter: Will convert to Gallon
    /// @return     : Converted Gallon value from Liter parameter
    double LiterToGallon(double liter){
        const double ONE_LITER_IN_GALLON = 0.264179;   
        return  liter * ONE_LITER_IN_GALLON;
    }

    /// @brief        : Calculates percent amount of value
    /// @param percent: Percent of value
    /// @param value  : Value that it wants to know the percent amount
    /// @return       : Return the percent amount from value
    double PercentValue(double percent, double value){
        return (percent*value)/100;
    }

    /// @brief   : It returns the arithmetic avarage value from 4 input parameters
    /// @param n1: First value  
    /// @param n2: Second value
    /// @param n3: Third value
    /// @param n4: Fourth value
    /// @return  : Arithmetic avarage value from four parameters
    double Average(double n1, double n2, double n3, double n4){
        return (n1 + n2 + n3 + n4)/4.0;
    }

    /// @brief    : It returns the average deviatoon value from 4 input parameters
    /// @param avg: Average value need to calculation 
    /// @param n1 : First value  
    /// @param n2 : Second value
    /// @param n3 : Third value
    /// @param n4 : Fourth value
    /// @return   : Average deviation value from four parameters
    double AverageDeviation(double avg, double n1, double n2, double n3, double n4){
        return (abs(n1 - avg) + abs(n2 - avg) + abs(n3 - avg) + abs(n4 - avg))/4.0;
    }

    /// @brief    : It returns the standard deviatoon value from 4 input parameters
    /// @param avg: Standard value need to calculation 
    /// @param n1 : First value  
    /// @param n2 : Second value
    /// @param n3 : Third value
    /// @param n4 : Fourth value
    /// @return   : Standard deviation value from four parameters
    double StandardDeviation(double avg, double n1, double n2, double n3, double n4){
        return sqrt((pow(n1-avg,2) + pow(n2-avg,2) + pow(n3-avg,2) + pow(n4-avg,2)) /4.0);
    }
}