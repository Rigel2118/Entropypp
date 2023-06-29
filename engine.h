#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED
#include "powers.h"
#include "dependencies.h"
#include "variables.h"
#include <vector>

using namespace std;

void engine() {

    // 2-Div test
    m=reduce(m, 2); // Divide by 2 as many times as possible
    updatem();

    // i-Div test
    for(i=3;m>1&&i<=lim_m;i+=2) {
        if(isprime(i)) { // We only allow primes for testing
            m=reduce(m, i); // Divide by i as many times as possible
            updatem();
        }
    }

    // m-Div test (final factor)
    if(m!=1) {
        cout << "--> " << m << endl;
    }

}

#endif // ENGINE_H_INCLUDED