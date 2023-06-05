#include "output.h"

namespace ihm{
    namespace output{
        void PrintOnConsoleNumber(std::string msg, double number, char newline){
            printf("%s%.2f%c",msg.c_str(), number, newline);
        }

        /// @brief Type a message in the terminal followed by an int number and a carriege return '\n'
        /// @param msg Message to be print
        /// @param number Number to be print after message
        /// @return void
        void PrintOnConsoleNumberLn(std::string msg, int number){
            printf("%s%d\n",msg.c_str(), number);
        }
        
        void PrintOnConsoleArray(std::string msg, double array[], unsigned int size, std::string separator){
            // Print message before print array
            printf("%s",msg.c_str());

            // Print array
            for (unsigned int i = 0; i < size; i++){
                printf("%.2f%s", array[i], separator.c_str());
            }
        }
        
        void PrintOnConsoleArray(double array[], unsigned int size, std::string separator){
            for (unsigned int i = 0; i < size; i++){
                printf("%.2f%s", array[i], separator.c_str());
            }
        }
        
        void PrintOnConsoleArray(int array[], unsigned int size, std::string separator){
            for (unsigned int i = 0; i < size; i++){
                printf("%03d%s", array[i], separator.c_str());
            }
        }

        void PrintOnConsoleArrayLn(int array[], unsigned int size, std::string separator){
            for (unsigned int i = 0; i < size; i++){
                printf("%03d%s", array[i], separator.c_str());
            }
            printf("\n");
        }
        
        /// @brief Type a carriege return '\n' in the terminal
        /// @return void
        void PrintOnConsoleLn(){
            printf("\n");
        }

        /// @brief Type a message in the terminal followed by a carriege return '\n'
        /// @param msg Message to be print
        /// @return void
        void PrintOnConsoleMessageLn(std::string msg){
            std::cout << msg << std::endl;
        }
    }
}