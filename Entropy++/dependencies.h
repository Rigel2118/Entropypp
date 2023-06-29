#ifndef DEPENDENCIES_H_INCLUDED
#define DEPENDENCIES_H_INCLUDED
#include "powers.h"
#include "dependencies.h"
#include "variables.h"
#include <vector>
#include <chrono>
#include <cmath>

using namespace std;

// Keep dividing x by y when possible
unsigned long long reduce(unsigned long long x, unsigned long long y) {
    while(x%y==0) {
        x/=y;
        cout << "--> " << y << endl;
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
            return false;
        }
    }
    if(pass) {
        primeLs.push_back(x);
        return true;auto t3 = chrono::high_resolution_clock::now();
    //updatem();
    auto t4 = chrono::high_resolution_clock::now();
	chrono::duration<double, std::milli> ms_double = t4 - t3;
	cout << "Finished in " << ms_double.count() << " ms. Lim is " << lim_m << endl;
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
