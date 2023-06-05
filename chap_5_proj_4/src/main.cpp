/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 5 | Project 4                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* bla bla bla                                                                                    */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main()
{
   // total amount of filled indexes of arrary
   unsigned int fillmentQuantity = 16;
                    
   int values[20] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12};
   
   // Table to be print
   int table[2][fillmentQuantity] = {0};

   // Test console output - input data
   ihm::output::PrintOnConsoleMessageLn("\nInput: ");
   ihm::output::PrintOnConsoleArrayLn(values, fillmentQuantity);
   ihm::output::PrintOnConsoleLn();
   
   // Sort values
   array::Sort(values, fillmentQuantity);

   // Count and sort in a table
   for(unsigned int i = 0; i <= fillmentQuantity; i++){
      table[0][i] = values[i];
      table[1][i] = array::Count(values,values[i],fillmentQuantity);
      array::DeleteRepeated(values, values[i], fillmentQuantity);
   }
   
   ihm::output::PrintOnConsoleMessageLn("  N  Count");
   for(unsigned int i = 0; i < fillmentQuantity; i++){
      printf("%*d % 2d\n",3, table[0][i], table[1][i]);
   }

   return 0;
}