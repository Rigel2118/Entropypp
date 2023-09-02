#ifndef DEPENDENCIES_H_INCLUDED
#define DEPENDENCIES_H_INCLUDED

#include "variables.h"
#include "sqrt.h"
#include <vector>
#include <fstream>
#include <chrono>
#include <cstdint>

using namespace std;

// Print a line
void line() {
	cout << "\033[1;36m--------------------------------------\033[0m" << endl;
}

// Print a number in screen
void printNumber(unsigned long long x) {
	cout << "--> " << x << endl;
}

// Keep dividing x by y when possible
unsigned long long reduce(unsigned long long x, unsigned long long y) {
    while(x%y==0) {
        x/=y;
        factorLs.push_back(y);
        printNumber(y);
    }
    return x;
}

// Update testing limits
unsigned long long updateLimit(unsigned long long x) {
    return (unsigned long long)wsqrt(x);
}

// Check if x is prime (NOT STANDALONE, only works incrementally starting at 3)
bool isprime(unsigned long long x) {
    unsigned long long lim_x = updateLimit(x);
    for(j=0;primeLs.at(j)<=lim_x;j++) {
        if(x%primeLs.at(j)==0)
			return false;
    }
	primeLs.push_back(x);
	return true;
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

// Write log file
void printLog() {
	ofstream outfile ("output.txt");
	outfile << "FACTORS OF " << n << endl;
	outfile << "-----------------------" << endl;
	for(j=0;j<factorLs.size();j++) {
		outfile << factorLs.at(j) << endl;
	}
	outfile << "-----------------------" << endl;
	outfile.close();
}

#endif // DEPENDENCIES_H_INCLUDED
