/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 5 | Project 5                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* bla bla bla                                                                                    */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

using namespace std;

int main()
{
   const int NUMBERLENGHT = 20;
   const char ENDCHAR = '.';
   
   char charUpperNumber[NUMBERLENGHT] = {0};
   char charLowerNumber[NUMBERLENGHT] = {0};
   int intUpperNumber[NUMBERLENGHT] = {0};
   int intLowerNumber[NUMBERLENGHT] = {0};
   int resultLSN[NUMBERLENGHT] = {0};
   int goOne = 0;
   int i = 0;
   unsigned int lowerNumberLenght = 0;
   unsigned int upperNumberLenght = 0;

   // Print a header
   ihm::output::PrintOnConsoleMessageLn("Sum calculator");
   
   // Read input value from user terminal (keyboard)
   upperNumberLenght = ihm::input::ReadUntilSizeOrEndChar("Type upper number to add. Finished it with end character dot (.): ", charUpperNumber, NUMBERLENGHT, ENDCHAR);
   lowerNumberLenght = ihm::input::ReadUntilSizeOrEndChar("Type lower number to add. Finished it with end character dot (.): ", charLowerNumber, NUMBERLENGHT, ENDCHAR);
   
   // Shift values to the end of array (LSD - least significant digit)
   array::ShiftRight(charUpperNumber, NUMBERLENGHT, NUMBERLENGHT - upperNumberLenght);
   array::ShiftRight(charLowerNumber, NUMBERLENGHT, NUMBERLENGHT - lowerNumberLenght); 
   
   // Convert values from char[] to int[]
   for(i = 0 ; i < NUMBERLENGHT; i++){
      if(charUpperNumber[i] != 0)
         intUpperNumber[i] = charUpperNumber[i] - 48;
      if(charLowerNumber[i] != 0)
         intLowerNumber[i] = charLowerNumber[i] - 48;
   }

   // Sum values (stores in the LSD)
   for(i = NUMBERLENGHT - 1 ; i > 0; i--){
      if(intUpperNumber[i] > 0 || intLowerNumber[i] > 0 || goOne > 0){
         resultLSN[i] = (intUpperNumber[i] + intLowerNumber[i] + goOne) % 10;
         goOne = (intUpperNumber[i] + intLowerNumber[i] + goOne) / 10;
      }
      else{
         break;
      }
   }

   // print only valid numbers (from MSD to LSD) 
   ihm::output::PrintOnConsoleMessageLn("Result:");
   if(goOne > 0){
      printf("%d", goOne);
   }
   for(i++; i < NUMBERLENGHT; i++){
      printf("%d", resultLSN[i]);
   }
   ihm::output::PrintOnConsoleLn();

   return 0;

}