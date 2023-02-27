#include "functions.h"

void IncrementLower(unsigned int& n1,unsigned int& n2,unsigned int& n3){
    if (n1 < n2 && n1 < n3){
        n1++;
    }
    else if (n2 < n1 && n2 < n3){
        n2++;
    }
    else if (n3 < n1 && n3 < n2){
        n3++;
    }
    else{
        n1++;
    }
}

double TriangleArea(unsigned int s1, unsigned int s2, unsigned int s3){
    double semiperimeter = 0.0;
    double area = 0.0;

    // Calculates area
    semiperimeter = (s1 + s2 + s3)/2.0;
    area = sqrt(semiperimeter * (semiperimeter-s1) * (semiperimeter-s2)*(semiperimeter-s3));

    return area;
}

unsigned int TrianglePerimeter(unsigned int s1, unsigned int s2, unsigned int s3){
    unsigned int perimeter = 0;
    
    // Calculates perimeter
    perimeter = s1 + s2 + s3;

    return perimeter;
}

void TriangleCalculator(double& area, unsigned int& perimeter, unsigned int s1, unsigned int s2, unsigned int s3){
    
    area = TriangleArea(s1, s2, s3);
    
    // Check if area is a valid value
    if (!(area > 0)){
        while(!area){
            IncrementLower(s1, s2, s3);
            area = TriangleArea(s1, s2, s3);
        }
        printf("Original values could not be used. Suggest values bellow.\n");
    }

    perimeter = TrianglePerimeter(s1, s2, s3);
}