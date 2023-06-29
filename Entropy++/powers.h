#ifndef POWERS_H_INCLUDED
#define POWERS_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <string.h>

double wsqrt(double number) {
    double temp, sqrt;
    // store the half of the given number e.g from 256 => 128
    sqrt = number / 2;
    temp = 0;
    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrt != temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqrt;
        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqrt = ( number/temp + temp) / 2;
    }
    return sqrt;
}



#endif // POWERS_H_INCLUDED
