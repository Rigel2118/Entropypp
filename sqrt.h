#ifndef POWERS_H_INCLUDED
#define POWERS_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <string.h>

double wsqrt(double x) {
    double y, z;
    z=x/2;
    y=0;
    while(z!=y) {
        y=z;
        z=(x/y + y)/2;
    }
    return z;
}

#endif // POWERS_H_INCLUDED
