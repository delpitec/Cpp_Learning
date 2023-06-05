#include <iostream>

namespace ihm
{
    namespace output
    {
        void PrintOnConsoleNumber(std::string msg, double number, char newline = '\n');
        void PrintOnConsoleNumberLn(std::string msg, int number);
        void PrintOnConsoleArray(std::string msg, double array[], unsigned int size, std::string separator = " ");
        void PrintOnConsoleArray(double array[], unsigned int size, std::string separator = " ");
        void PrintOnConsoleArray(int array[], unsigned int size, std::string separator = " ");
        void PrintOnConsoleArrayLn(int array[], unsigned int size, std::string separator = " ");
        void PrintOnConsoleLn();
        void PrintOnConsoleMessageLn(std::string msg);
    }
}