#include "functions.h"
#include "main.h"


void FillRainData(int rainData[][2], unsigned int currentMonthIndex){
   // Printed months counter
   int FilledMonths = 0;

   // Will fill last 12 months
   for (int i = currentMonthIndex; FilledMonths < monthsQuantityData; i--){ 
      // Check if we are before Jan
      if (i < 0){
         i = 11;
      }
      
      printf("Type %s average rain quantity (mm): ", months[i].c_str());
      cin >> rainData[i][0];
      
      printf("Type %s real rain quantity (mm): ", months[i].c_str());
      cin >> rainData[i][1];

      FilledMonths++;
   }
}

void PrintRainDataTable(int rainData[][2], unsigned int currentMonthIndex){
   // Printed months counter
   int PrintedMonths = 0;

   // Prints header
   printf("\n---------------------------------------\n");
   printf("| Month | Average | Real | Difference |\n");
   printf("--------+---------+------+-------------\n");

   // Will print last 12 months
   for (int i = currentMonthIndex; PrintedMonths < monthsQuantityData; i--){ 
      // Check if we are before Jan
      if (i < 0){
         i = 11;
      }
    
      printf("|  %s  |   %03d   | %03d  |    %+04d    |\n",months[i].c_str(), rainData[i][0], rainData[i][1], rainData[i][1] - rainData[i][0]);
      
      PrintedMonths++;
   }

   printf("--------+---------+------+-------------\n");

}

void PrintRainDataChart(int rainData[][2], unsigned int currentMonthIndex){
   // Printed months counter
   int PrintedMonths = 0;

   printf("\n");

   // Will print last 12 months
   for (int i = currentMonthIndex; PrintedMonths < monthsQuantityData; i--){ 
      // Check if we are before Jan
      if (i < 0){
         i = 11;
      }
    
      printf("%s avrg: ",months[i].c_str());
      for(int j = 0; j < rainData[i][0]/10; j++){
         printf("*");
      }

      printf("\n%s real: ",months[i].c_str());
      for(int j = 0; j < rainData[i][1]/10; j++){
         printf("*");
      }
      
      printf("\n");
      
      PrintedMonths++;
   }
}