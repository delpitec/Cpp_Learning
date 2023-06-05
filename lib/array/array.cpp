#include "array.h"

namespace array{

    int GetIndex(const std::string input[], std::string target, unsigned int size){
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

    void DeleteRepeated(char array[], unsigned int& arrayFillment){
        for(unsigned int i = 0; i < arrayFillment; i++){
            // ignore 0 value fields
            if(array[i] == 0){
                continue;
            }
            for(unsigned int j = i + 1; j < arrayFillment; j++){
                if(array[i] == array[j]){
                    for(unsigned int k = j; k < arrayFillment; k++){
                        array[k] = array[k+1];
                        array[k+1] = 0;
                    }
                    arrayFillment--;
                }
            }
        }
    }

    void DeleteRepeated(int array[], int target, unsigned int& arrayFillment){
        for(unsigned int i = 0; i < arrayFillment; i++){
            for(unsigned int j = i + 1; j < arrayFillment; j++){
                if(array[i] == array[j] && array[j] == target){               
                    for(unsigned int k = j; k < arrayFillment; k++){
                        array[k] = array[k+1];
                        array[k+1] = 0;
                    }
                    arrayFillment--;
                    j--;
                }
            }
        }
    }

    unsigned int Count(int array[], int target, unsigned int size){
        unsigned int quantity = 0;
        for(unsigned int i = 0; i < size; i++){
            if(array[i] == target){
                quantity++;    
            }
        }
        return quantity;
    }

    void Sort(int array[], unsigned int size){
        for(unsigned int i = 0; i < size; i++){
            for(unsigned int j = i; j < size; j++){
                if(array[i] < array[j]){
                    int buffer = array[i];
                    array[i] = array[j];
                    array[j] = buffer;
                    i--;
                    break;
                }
            }
        }
    }

    void ShiftRight(char input[], int size, int jumps){
        for(unsigned int j = 0; j < jumps; j++){
            for(unsigned int i = size - 1; i > 0; i--){
                input[i] = input[i - 1];
                input[i - 1] = 0;
            }
        }
    }
}