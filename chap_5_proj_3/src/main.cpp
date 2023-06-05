/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 5 | Project 3                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* bla bla bla                                                                                    */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main()
{
   unsigned int size = 10;
   double values[15] = {15.0, 27.0, 12.0, 13.0};

   // Test console output - input data
   ihm::output::PrintOnConsoleArray("values[]: ", values, 4);

   // Run and test(assert simplest way as possible)
   double RetStandardDeviation = calculator::StandardDeviation(values, 4);   
   assert(RetStandardDeviation < 6.03 && RetStandardDeviation > 6.01) ;

   // Test console output - if all is ok
   ihm::output::PrintOnConsoleNumber("\nTEST PASSED\nStandard Deviation for input values[] is: ", RetStandardDeviation);

   return 0;
}