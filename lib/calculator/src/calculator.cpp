#include "calculator.h"

namespace calculator{
    
    /// @brief Return convertion value from Gram to Pound
    /// @param gram Will convert to Pound
    /// @return Converted Pound value from Gram parameter
    double GramToPound(double gram){
        const double ONE_GRAM_IS_POUND = 0.002205;
        return gram * ONE_GRAM_IS_POUND;       
    }

    /// @brief Return convertion value from Gram to Ounce
    /// @param gram Will convert to Ounce
    /// @return Converted Ounce value from Gram parameter
    double GramToOunce(double gram){
        const double ONE_GRAM_IS_OUNCE = 0.03527;
        return gram * ONE_GRAM_IS_OUNCE;       
    }

    /// @brief Return convertion value from Kilogram to Pound
    /// @param kilogram Will convert to Pound
    /// @return Converted Pound value from Kilogram parameter
    double KilogramToPound(double kilogram){
        const double ONE_KILOGRAM_IS_POUND = 2.205;
        return kilogram * ONE_KILOGRAM_IS_POUND;       
    }

    /// @brief Return convertion value from Kilogram to Ounce
    /// @param kilogram Will convert to Ounce
    /// @return Converted Ounce value from Kilogram parameter
    double KilogramToOunce(double kilogram){
        const double ONE_KILOGRAM_IS_OUNCE = 35.274;
        return kilogram * ONE_KILOGRAM_IS_OUNCE;       
    }

    /// @brief Return convertion value from Centimeter to Inch
    /// @param centimeter Will convert to Inch
    /// @return Converted Inch value from Centimeter parameter
    double CentimeterToInch(double centimeter){
        const double ONE_CENTIMETER_IS_INCH = 0.393701;
        return centimeter * ONE_CENTIMETER_IS_INCH;       
    }
    
    /// @brief Return convertion value from Centimeter to Feet
    /// @param centimeter Will convert to Feet
    /// @return Converted Feet value from Centimeter parameter
    double CentimeterToFeet(double centimeter){
        const double ONE_CENTIMETER_IS_FEET = 0.0328084;
        return centimeter * ONE_CENTIMETER_IS_FEET;       
    }

    /// @brief Return convertion value from Meter to Inch
    /// @param meter Will convert to Inch
    /// @return Converted Inch value from Meter parameter
    double MeterToInch(double meter){
        const double ONE_METER_IS_INCH = 39.3701;
        return meter * ONE_METER_IS_INCH;       
    }
    
    /// @brief Return convertion value from Meter to Feet
    /// @param meter Will convert to Feet
    /// @return Converted Feet value from Meter parameter
    double MeterToFeet(double meter){
        const double ONE_METER_IS_FEET = 3.28084;
        return meter * ONE_METER_IS_FEET;       
    }

    /// @brief Return convertion value from Ounce to Gram
    /// @param ounce Will convert to Gram
    /// @return Converted Gram value from Ounce parameter
    double OunceToGram(double ounce){
        const double ONE_OUNCE_IN_GRAM = 28.34;
        return ounce * ONE_OUNCE_IN_GRAM;
    }

    /// @brief Return convertion value from Ounce to Kilogramm
    /// @param ounce Will convert to Kilogramm
    /// @return Converted Kilogram value from Ounce parameter
    double OunceToKilogram(double ounce){
        const double ONE_OUNCE_IN_KILOGRAM = 0.02834;
        return ounce  * ONE_OUNCE_IN_KILOGRAM;
    }

    /// @brief Return convertion value from Ounce to Tonne
    /// @param ounce Will convert to tonne
    /// @return Converted Tonne value from Ounce parameter
    double OunceToTonne(double ounce){
        const double ONE_TONE_IN_OUNCE = 35273.92;
        return ounce/ONE_TONE_IN_OUNCE;
    }

    /// @brief Return convertion value from Pound to Gram
    /// @param pound Will convert to tonne
    /// @return Converted Gram value from Pound parameter
    double PoundToGram(double pound){
        const double ONE_POUND_IN_GRAM = 453.6;
        return pound * ONE_POUND_IN_GRAM;       
    }

    /// @brief Return convertion value from Pound to Kilogram
    /// @param pound Will convert to Kilogram
    /// @return Converted Kilogram value from Pound parameter
    double PoundToKilogram(double pound){
        const double ONE_POUND_IN_KILOGRAM = 0.4536;
        return pound * ONE_POUND_IN_KILOGRAM;       
    }
    
    /// @brief Return convertion value from Inch to Meter
    /// @param inch Will convert to Meter
    /// @return Converted Meter value from Inch parameter
    double InchToMeter(double inch){
        const double ONE_INCH_IS_METER = 0.0254;
        return inch * ONE_INCH_IS_METER;       
    }
    
    /// @brief Return convertion value from Inch to Centimeter
    /// @param inch Will convert to Centimeter
    /// @return Converted Centimeter value from Inch parameter
    double InchToCentimeter(double inch){
        const double ONE_INCH_IS_CENTIMETER = 2.54;
        return inch * ONE_INCH_IS_CENTIMETER;       
    }
    
    /// @brief Return convertion value from Feet to Meter
    /// @param feet Will convert to Meter
    /// @return Converted Meter value from Feet parameter
    double FeetToMeter(double feet){
        const double ONE_FEET_IS_METER = 0.3048;
        return feet * ONE_FEET_IS_METER;       
    }
    
    /// @brief Return convertion value from Feet to Centimeter
    /// @param feet Will convert to Centimeter
    /// @return Converted Centimeter value from Feet parameter
    double FeetToCentimeter(double feet){
        const double ONE_FEET_IS_CENTIMETER = 30.48;
        return feet * ONE_FEET_IS_CENTIMETER;       
    }

    /// @brief Return convertion value from Liter to Gallon
    /// @param liter Will convert to Gallon
    /// @return Converted Gallon value from Liter parameter
    double LiterToGallon(double liter){
        const double ONE_LITER_IN_GALLON = 0.264179;   
        return  liter * ONE_LITER_IN_GALLON;
    }

    /// @brief Calculates percent amount of value
    /// @param percent Percent of value
    /// @param value Value that it wants to know the percent amount
    /// @return Return the percent amount from value
    double PercentValue(double percent, double value){
        return (percent*value)/100;
    }

    /// @brief It returns the arithmetic avarage value from 4 input parameters
    /// @param n1 First value  
    /// @param n2 Second value
    /// @param n3 Third value
    /// @param n4 Fourth value
    /// @return Arithmetic avarage value from four parameters
    double Average(double n1, double n2, double n3, double n4){
        return (n1 + n2 + n3 + n4)/4.0;
    }

    /// @brief It returns the average deviatoon value from 4 input parameters
    /// @param avg Average value need to calculation 
    /// @param n1 First value  
    /// @param n2 Second value
    /// @param n3 Third value
    /// @param n4 Fourth value
    /// @return Average deviation value from four parameters
    double AverageDeviation(double avg, double n1, double n2, double n3, double n4){
        return (abs(n1 - avg) + abs(n2 - avg) + abs(n3 - avg) + abs(n4 - avg))/4.0;
    }

    /// @brief It returns the standard deviatoon value from 4 input parameters
    /// @param avg Standard value need to calculation 
    /// @param n1 First value  
    /// @param n2 Second value
    /// @param n3 Third value
    /// @param n4 Fourth value
    /// @return Standard deviation value from four parameters
    double StandardDeviation(double avg, double n1, double n2, double n3, double n4){
        return sqrt((pow(n1-avg,2) + pow(n2-avg,2) + pow(n3-avg,2) + pow(n4-avg,2)) /4.0);
    }

    /// @brief Convert 24h time format to 12h time format 
    /// @param hour Pointer to hour that will be convert to 12h time format
    /// @param min Pointer to minute that will be convert to 12h time format
    /// @param period Pointer to period char that will receive 12h period (A/P -> AM/PM)
    void Time24hTo12h(unsigned int& hour, unsigned int& min, char& period){
        if (hour == 12){
            hour = hour;  // dummy
            min = min;    // dummy
            period = 'P';
        }
        else if (hour > 12){
            hour -= 12; 
            min = min;    // dummy
            period = 'P';
        }
        else{
            hour = hour;  // dummy
            min = min;    // dummy
            period = 'A';	
        }
    }
}