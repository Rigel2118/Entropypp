#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include "sqrt.h"
#include "dependencies.h"
#include "variables.h"
#include <vector>
#include <cstdint>

using namespace std;

void engine() {

    // 2-Div test
    m=reduce(m, 2); // Divide by 2 as many times as possible
    lim_m=updateLimit(m); // Update max divisibility test number

    // i-Div test
    for(i=3;m>1&&i<=lim_m;i+=2) {
        if(isprime(i)) { // We only allow primes for testing
            m=reduce(m, i); // Divide by i as many times as possible
            lim_m=updateLimit(m); // Update max divisibility test number
        }
    }

    // m-Div test (final factor)
    if(m>1) { // If m>1 but i>lim_m, then m is prime
        factorLs.push_back(m);
		printNumber(m);
    }

}

#endif // ENGINE_H_INCLUDED
