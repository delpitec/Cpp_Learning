/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 5 | Project 1                                                                          */
/* Author: Rafael Del Pino                                                                        */
/*                                                                                                */
/* Write a program that reads the average amount of monthly rainfall for each month of the year   */
/* and then read the actual amount of rainfall for each of the previous 12 months. Print a table  */
/* that shows the amount of rainfall for each of the previous 12 months and also how much above   */
/* or below average the amount of rainfall was in each month. The monthly average is given by the */
/* months of January, February and so on, in sequence. To get the amount of rain real in the      */
/* previous 12 months, the program first asks what is the current month and then asks the amount  */
/* rainfall data in the previous 12 months. The output must correctly name the months.            */
/* There are several ways to deal with month names. A simple method is to encode the months as    */
/* integers and then do a conversion before output it. A large command switch is acceptable.      */
/* in an output function. After you have finished the above program, produce an improved version  */
/* which has also been presented a graph displaying average and actual rainfall for each of the   */
/* previous 12 months. The graph should look similar to that shown in Panel 5.4 book example,     */
/* except that there should be two bars for each month and these should be given the average      */
/* labels of average and real rainfall data in the last month. Your program should ask if the     */ 
/* user wants to see the table or chart, and then it should display the requested format.         */
/* Includes a loop that allows the user to see one or another format as many times as you want    */
/* until you request the program to exit.                                                         */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"
#include "array.h"

int main()
{
   // Average and real 12 months rain data
   int RainFallData[monthsQuantityData][2];
   
   do{
      string currentMonth = "";
      int printTable = 0;

      // ask month
      std::cout << "Type current month: ";
      std::cin >> currentMonth;

      // ask output type
      ihm::input::ReadOnlyRange("Type 0 to print rainfall data chart or 1 to rainfall data table (0/1): ", printTable, 0, 1);

      // get months rain data
      FillRainData(RainFallData, array::GetIndex(months, currentMonth, 12));
      
      if (printTable){
         PrintRainDataTable(RainFallData, array::GetIndex(months, currentMonth, 12));
      }
      else{
         PrintRainDataChart(RainFallData, array::GetIndex(months, currentMonth, 12));
      }
   }while(ihm::input::ReadStringAndConvertToBoolean("Print again? (yes/no) ","yes","no"));

   return 0;
}