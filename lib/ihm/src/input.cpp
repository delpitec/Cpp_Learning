#include "input.h"

namespace ihm{
    namespace input{

        /// @brief Type a message and request a double value
        /// @param requestMessage Text print before get value cursor
        /// @param value Pointer that will store double get value
        /// @return void
        void ReadOnlyPositive(std::string requestMessage, double& value){
            std::cout << requestMessage;
            std::cin >> value;
            assert(value > 0.0);
        }

        /// @brief Type a message and request an int value
        /// @param requestMessage Text print before get value cursor
        /// @param value Pointer that will store int get value
        /// @return void
        void ReadOnlyPositive(std::string requestMessage, int& value){
            std::cout << requestMessage;
            std::cin >> value;
            assert(value > 0);
        }

        /// @brief Type a message and request an int value
        /// @param requestMessage Text print before get value cursor
        /// @param value Pointer that will store int get value
        /// @param minValue Min value alowwed to receive on int get value
        /// @param maxValue Max value alowwed to receive on int get value
        /// @return void
        void ReadOnlyRange(std::string requestMessage, int& value, int minValue, int maxValue){
            std::cout << requestMessage;
            std::cin >> value;
            assert(value >= minValue && value <= maxValue);
        }

        /// @brief Type a message and request an string input and return true or false according to handlers values
        /// @param requestMessage Text print before get value cursor
        /// @param handlerTrue String target value to return TRUE
        /// @param handlerFalse String target value to return FALSE
        /// @return if requestMessage == handlerTrue than return TRUE, requestMessage == handlerFalse than return FALSE 
        bool ReadStringAndConvertToBoolean(std::string requestMessage, std::string handlerTrue, std::string handlerFalse){
            std::string input = "";
            std::cout << requestMessage;
            std::cin >> input;
            
            assert(input == handlerTrue || input == handlerFalse);

            if (input == handlerTrue){
                return true;
            }
            else{
                return false;
            }
        }

        unsigned int ReadUntilSizeOrEndChar(std::string requestMessage, char *array, unsigned int maxMessageSize, char endMessageCharacter){
            char input = 0;
            unsigned int ret = 0;
            std::cout << requestMessage;
            for(unsigned int i = 0; i < maxMessageSize; i++){
                std::cin >> input;
                if(input == endMessageCharacter){
                    ret = i;
                    break;
                }
                else{
                    array[i] = input;
                }
            }
            return ret;
        }
    }
}