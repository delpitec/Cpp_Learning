#include <stdlib.h> 
#include <math.h>

namespace calculator{

    double GramToPound(double gram);
    double GramToOunce(double gram);
    double KilogramToPound(double kilogram);
    double KilogramToOunce(double kilogram);
    double CentimeterToInch(double meter);
    double CentimeterToFeet(double meter);
    double MeterToInch(double meter);
    double MeterToFeet(double meter);
    double OunceToGram(double ounce);
    double OunceToKilogram(double ounce);
    double OunceToTonne(double ounce);
    double PoundToGram(double pound);
    double PoundToKilogram(double pound);
    double InchToMeter(double inch);
    double InchToCentimeter(double inch);
    double FeetToMeter(double feet);
    double FeetToCentimeter(double feet);
    double LiterToGallon(double literAmount);
    double PercentValue(double percent, double value);
    double Average(double n1, double n2, double n3, double n4);
    double AverageDeviation(double avg, double n1, double n2, double n3, double n4);
    double StandardDeviation(double avg, double n1, double n2, double n3, double n4);
    double StandardDeviation(double array[], int arrayFillment);
    void Time24hTo12h(unsigned int& hour, unsigned int& min, char& period);

}