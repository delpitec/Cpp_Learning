#include "functions.h"

double HatSize(double height, double weight){
    const double HAT_SIZE_CONST = 2.9;
    
    return HAT_SIZE_CONST*(weight/height);
}

double CoatSize(double height, double weight, unsigned int age){
    const double COAT_SIZE_CONST = 2.9;
    double size = 0.0;
    
    size = (height*weight)/COAT_SIZE_CONST;

    if (age > 30){
        size += 0.125 * ((age - 30) / 10); 
    }

    return size;
}

double BeltSize(double weight, unsigned int age){
    const double COAT_SIZE_CONST = 5.7;
    double size = 0.0;
    
    size = weight/COAT_SIZE_CONST;

    if (age > 28){
        size += 0.1 * (((age - 28) / 2)); 
    }

    return size;;
}