#include <iostream>
#include <cassert>

namespace ihm
{
    namespace input
    {
        void ReadOnlyPositive(std::string requestMessage, double& value);
        void ReadOnlyPositive(std::string requestMessage, int& value);
        void ReadOnlyRange(std::string requestMessage, int& value, int minValue, int maxValue);
        bool ReadStringAndConvertToBoolean(std::string requestMessage, std::string handlerTrue, std::string handlerFalse); 
    }
}