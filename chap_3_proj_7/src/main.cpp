/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 3 | Project 7                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Meteorologists transmit an index called the wind chill factor when it's cold. It takes into    */
/* account wind speed and temperature. The index provides a measure of the cooling effect of      */
/* wind at a given air temperature. This index can be approximated by the following formula:      */
/*                                                                                                */
/*      W = 13.12 + 0.6215*t – 11.37*v^0.16 + 0.3965*t*v^0.016                                    */
/*                                                                                                */
/*      t = temperature (Celsius degree) Note: t <= 10                                            */
/*      v = wind speed  (m/s)                                                                     */
/*                                                                                                */
/*  Write a function that gives the wind chill index and ensure the temperature restriction       */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

double WindChillCalculator(double temp, double spd){
    return 13.12 + (0.6215*temp) - (11.37*pow(spd,0.16)) + (0.3965*temp*pow(spd,0.016));
}

int main(){
    double windSpeed = 0.0;
    double temperature = 0.0;

    std::cout << "Type temperature (ºC): ";
    std::cin >> temperature;
    std::cout << "Type wind speed (m/s): ";
    std::cin >> windSpeed;
    
    if (temperature <= 10){
        printf("Wind chill factor is: %.2f\n", WindChillCalculator(temperature,windSpeed));
    }
    else{
        printf("To Wind chill factor calculation, temperature need to be less than 10ºC\n");     
    }

    return (0);
}