#include "functions.h"

void GetInput(unsigned int& inA, unsigned int& inB){
    std::string input = "";
    std::cout << "Type the 24h format hour (hh:mm): ";
    std::cin >> input;

    // Convert string hour and minutes to int
    inA = ((input.at(0)-48)*10) + (input.at(1)-48);
    inB = ((input.at(3)-48)*10) + (input.at(4)-48);
}

void Print12hFormat(unsigned int hour, unsigned int minute, char period){
    printf("12h format: %02d:%02d %cM\n",hour, minute, period);
}
