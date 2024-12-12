#include <iostream>
using namespace std;
// Initialzing arrays
// type name [elements];
string name [5];    // Size of array 5

int foo [5] = {16, 2, 77, 40, 12071};   // [16, 2, 77, 40, 12071]
int bar [5] = {10, 20, 30}; // [10, 20, 30, 0, 0]
int baz [5] = { };   // [0, 0, 0, 0, 0]
int fooAlternative [] = {16, 2, 77, 40, 12071}; // [] is empty therefore assume automatically a size for the array that matches the number of values includes between the braces {}.

// universal initialization - no longer need fro the equal sign between the declaration and the initializer (line 12 and 13 are the same thing)
int universalInitialization[] = {10, 20, 30};   // same as line 13
int universalInitilization[] {10, 20, 30};      // same as line 12

// Some other valid operations with arrays:
/*
foo[0] = a;
foo[a] = 75;
b = foo [a+2];
foo[foo[a]] = foo[2] + 5;   
*/

int n, result = 0;

int main()
{
    // Accessing the values of an array
    foo[2] = 75; // Storing the value 75 into the third element for foo;
    int x = foo[2]; // copying the values of the third element off foo to a variable called x

    // Example on accessing arrays
    std::cout << "\nAccessing arrays:\n";
    for (n=0; n<5; ++n)
    {
        std::cout << "Adding value: " << foo[n] << endl;
        result += foo[n];
    }
    std::cout << "Final result: " << result << endl;
    return 0;
}


