/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 5 | Project 2                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* bla bla bla                                                                                    */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main()
{
   unsigned int size = 10;
   char array[15] = {'a','b','c','b','a','f','g','c','i','j'};

   // Test console output - input data
   printf("Fill data size: %d\n", size);
   array[size] = 0;
   printf("array[]: %s\n", array);

   array::DeleteRepeated(array, size);
   
   // Assert array and size
   assert(size == 7);
   assert(array[0] == 'a' && array[1] == 'b' && array[2] == 'c' && array[3] == 'f' && 
          array[4] == 'g' && array[5] == 'i' && array[6] == 'j');

   // Test console output - if all is ok
   printf("TEST PASSED\nNew fill data size: %d\n", size);
   array[size] = 0;
   printf("New array[]: %s\n", array);

   return 0;
}