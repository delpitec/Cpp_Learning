#include <iostream>

namespace array{
    /// @brief Look for thr first index vakue of a specific string array item
    /// @param input Array of string to be check
    /// @param target Value that will look for
    /// @param size Array size
    /// @return Index value. If not found returns -1
    int GetIndex(const std::string input[], std::string target, unsigned int size);

    /// @brief Erases repeated items from a char array and keep only one of them
    /// @param array values that will be analized to be deleted
    /// @param arrayFilment ASCII char fields filled amount (consider empty fields as 0)
    /// @return void
    void DeleteRepeated(char array[], unsigned int& arrayFillment);

    /// @brief 
    /// @param array 
    /// @param arrayFilment 
    /// @return void
    void DeleteRepeated(int array[], int target, unsigned int& arrayFillment);
    
    /// @brief Return the total quantity of target values in the array
    /// @param array Array with values to be counted
    /// @param target ASCII int filled amount
    /// @param size Size of array
    /// @return Quantity of target values in the array   
    unsigned int Count(int array[], int target, unsigned int size);

    /// @brief Sort array values by ascending value
    /// @param array Values to be sorted
    /// @return void
    void Sort(int array[], unsigned int size);

    void ShiftRight(char input[], int size, int jumps);

}