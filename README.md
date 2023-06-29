# Entropy++
## Information
Entropy++ is a simple console application that factors any given integer number greater than 1 (up to 16 digits) into prime factors, using two basic discrete mathematics theorems. 

It is coded in C++ using Code::Blocks IDE, so I upload the IDE files.

## Running the app
a) You can directly download the binary for Linux and execute it.

b) If you want to build the project, just run in a terminal:<br />
`g++ -o Entropy++ main.cpp`

c) Or you can add the project to your Code::Blocks workspace and compile it from there.

## Usage
In console, just enter any integer greater than 1 and up to 16 digits in length (as long as your number does not exceed the length of the blue line in the terminal, you're good), the algorithm will factor it for you usually in just a few milliseconds.
Prime factors are stored in a vector called factorLs, so if you want to export or use the data into your own projects, there is a comment under engine.h file so you can access the data.
