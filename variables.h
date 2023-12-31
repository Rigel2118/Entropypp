#ifndef VARIABLES_H_INCLUDED
#define VARIABLES_H_INCLUDED
#include <vector>
#include <cstdint>
using namespace std;

// Setup
unsigned long long n; // Number given by user
unsigned long long m; // Buffer
unsigned long long i; // Divisibility testing variable for i
unsigned long long j; // Divisibility testing variable for i
unsigned long long lim_m; // Limit of i-Div testing

char repeat; // Try again from menu

vector<unsigned long long> primeLs {}; // Prime storage
vector<unsigned long long> factorLs {}; // Factor list

#endif // VARIABLES_H_INCLUDED
