#ifndef DEPENDENCIES_H_INCLUDED
#define DEPENDENCIES_H_INCLUDED

#include "variables.h"
#include "sqrt.h"
#include <vector>


using namespace std;

// Keep dividing x by y when possible
unsigned long long reduce(unsigned long long x, unsigned long long y) {
    while(x%y==0) {
        x/=y;
        factorLs.push_back(y);
    }
    return x;
}

// Update m limit (global function)
void updatem() {
    lim_m=(unsigned long long)wsqrt(m);
}

// Check if x is prime
bool isprime(unsigned long long x) {
    bool pass = true;
    unsigned long long lim_x = (unsigned long long)wsqrt(x);
    for(j=0;primeLs.at(j)<=lim_x;j++) {
        if(x%primeLs.at(j)==0) {
            pass=false;
            break;
        }
    }
    if(pass) {
        primeLs.push_back(x);
        return true;
    } else {
        return false;
    }
}

// Ask user for number to factor (global function)
void getn() {
	bool pass = false;
	while(pass==false) {
		cout << "Factor into primes: ";
		cin >> n;
		if(n>=2) {
			pass=true;
		} else {
			cout << "Not a valid number!" << endl;
			pass=false;
		}
	}
    m=n; // Save buffer
}

void line() {
	cout << "\033[1;36m------------------------------------\033[0m" << endl;
}

#endif // DEPENDENCIES_H_INCLUDED
