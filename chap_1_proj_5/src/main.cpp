/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 1 | Project 5                                                                          */
/* Author: Rafael Del Pino                                                                        */
/* Write a program that determines whether a conference room is violating legal fire regulations  */
/* regarding its maximum capacity. The program will read the maximum capacity of the room and the */
/* number of people who will attend the conference. If the number of people is less than or equal */
/* to the maximum capacity from the room, the program announces that the conference is in         */
/* accordance with legal norms and tells how many more people will be able to participate         */
/* according to these norms. Else the program announces that the conference cannot take place and */
/* says how many people must be excluded in order to comply with the norms.                       */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

int main(int argc, char** argv)
{

    unsigned int maxCapacity = 0;
    unsigned int currOccupancy = 0;

    std::cout << "Room max capacity: ";
    std::cin >> maxCapacity;
    std::cout << "Room current occupancy: ";
    std::cin >> currOccupancy;

    if (currOccupancy > maxCapacity){
        std::cout << "More occupancy than alowwed capacity by legal fire regulations. ";
        std::cout << "Need to remove "<<  currOccupancy - maxCapacity << " people." << std::endl;
    }
    else{
        std::cout << "Occupancy within alowwed capacity by legal fire regulations. ";
        std::cout << "More "<< maxCapacity - currOccupancy << " people allowed." << std::endl;
    }
}