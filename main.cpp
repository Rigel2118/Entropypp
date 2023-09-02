#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <chrono>
#include "sqrt.h"
#include "dependencies.h"
#include "variables.h"
#include "engine.h"
#include <cstdint>

using namespace std;

int main() {

    // Splash screen
    line();
    cout << "\033[1;32mEntropy++ v0.1.1 alpha\033[0m" << endl;
    cout << "Up to 16 digits (for now)!" << endl;
    line();

    // Prompt
    repeat = 'y';
    while(repeat == 'y') {
		// Clear factor list
		factorLs.clear();
		primeLs.clear();
		primeLs.push_back(2); // Initialize prime storage with 2

		// Get number from user
        getn();

        // Start execution time
        auto t1 = chrono::high_resolution_clock::now();

        // Run
        line();
        engine();

        // End execution time
        auto t2 = chrono::high_resolution_clock::now();

        // Calculate time
        chrono::duration<double, std::milli> ms_double = t2 - t1;

		// Show all primes used in testing
		line();
		cout << "#primes: " << primeLs.size() << endl;

		// Print execution time
		line();
		cout << "Finished in " << ms_double.count() << " ms" << endl;

        // Print log
        line();
		printLog();

        // Ask for another run
        cout << "Repeat? [y/n] ";
        cin >> repeat;
    }
    return 0;
}
