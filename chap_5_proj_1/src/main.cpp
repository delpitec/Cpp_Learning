/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 5 | Project 1                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* bla bla bla                                                                                    */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

namespace array{

   int GetIndex(const string input[], string target, unsigned int size){
      // return -1 if not found
      int ret = -1;
       
      for (unsigned int i = 0; i < size ; i++){
         // target found
         if (input[i] == target){
            ret = i;
            break;
         }
      }     
      return ret;
   }
}


int main()
{
   // Average and real 12 months rain data
   int RainData[monthsQuantityData][2];
   
   do{
      string currentMonth = "";
      int printTable = 0;

      // ask month
      std::cout << "Type current month: ";
      std::cin >> currentMonth;

      // ask output type
      ihm::input::ReadOnlyRange("Type 0 to print rain data chart or 1 to rain data table (0/1): ", printTable, 0, 1);

      // get months rain data
      FillRainData (RainData, array::GetIndex(months, currentMonth, 12));
      
      if (printTable){
         PrintRainDataTable(RainData, array::GetIndex(months, currentMonth, 12));
      }
      else{
         PrintRainDataChart(RainData, array::GetIndex(months, currentMonth, 12));
      }
   }while(ihm::input::ReadStringAndConvertToBoolean("Print again? (yes/no) ","yes","no"));

   return 0;
}