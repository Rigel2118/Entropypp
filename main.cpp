#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <chrono>
#include "powers.h"
#include "dependencies.h"
#include "variables.h"
#include "engine.h"

using namespace std;

int main() {

    // Splash screen
    line();
    cout << "\033[1;32mEntropy++ v0.1.0 alpha\033[0m" << endl;
    cout << "Up to 16 digits (for now)!" << endl;
    line();

    // Prompt
    repeat = 'y';
    while(repeat=='y') {
		// Clear factor list
		factorLs.clear();
		// Get number from user
        getn();

        // Start execution time
        auto t1 = chrono::high_resolution_clock::now();

        // Run
        line();
        engine();

        // End execution time
        auto t2 = chrono::high_resolution_clock::now();
        chrono::duration<double, std::milli> ms_double = t2 - t1;
        line();
        cout << "Finished in " << ms_double.count() << " ms" << endl;
        line();

        // Ask for another run
        cout << "Repeat? [y/n] ";
        cin >> repeat;
    }
    return 0;
}
