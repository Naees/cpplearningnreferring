// functions 
#include <iostream>
using namespace std;

// function example 
// type name (parameter 1, parameter 2, ...) (statement)
int addition(int a, int b)
{
    int r = a + b;
    return r;
}
int subtraction(int c, int d)
{
    int r = c - d;
    return r;
}

// functions with no type
void printmessage() // void printmessage(void)
{
    cout << "\nAn example of functions with no type using void! \n";
}

// arguments passed by reference
/*
Passing the parameters as VALUES, make copies of the arguments passed to the function when its called. 
if these are long strings, it may mean copying large quantities of data just for the function call.

Passing the paramenters as REFERENCES, do not require a copy. 
The function operates directly on (aliases of) the strings passed as arguments.
*/ 
void duplicate(int& a, int&b, int&c)
{
    a*=2;
    b*=2;
    c*=2;
}

// Efficiency considerations and const references
/* 
By using a const operator we can use references in a function call for efficiency consderations
*/
string concatenate (const string&a, const string&b)
{
    return a+b;
}

// Default values in parameters - declaring a function divide with b having a default value of 2
int divide (int a, int b=2)
{
    int r;
    r=a/b;
    return(b);
}

// Inline functions
/*
 Calling a function generally causes a certain overhead, 
 and thus for a very short function, 
 it may be more efficient to simply insert the code off the function where it is called.

 The inline command informs the complier that when concatenate is called, 
 the program prefers the functions to be expanded inline,
 instead of performing a regular call.
*/
inline string stringJoiningFunct(const string& a, string& b)
{
    return a + b;
}
// Declaring functions


int main()
{
    // Basic function example
    int z = addition(5,3);
    cout << "The result is " << z;

    // Functions can be called multiple times
    int x=5, y=3;
    z = subtraction (7,2);
    cout << "The first result is " << z << '\n';
    cout << "The second result is " << subtraction(16,2) << '\n';
    cout << "The third result is " << subtraction(x,y) << '\n';
    z = 4 + subtraction(x, y);
    cout << "The fourth result is " << z << '\n';
    z = 4 + subtraction(x,y);
    cout << "The fourth result  is " << z << '\n';

    // Calling the function with no type
    printmessage();     // printmessage without the parenthese does not call the function

    // Arguements by reference
    int xee=1, yee=3, zee=7;
    duplicate(x,y,z);
    cout << "\n x = " << xee << ", y = " << yee << ", z = " << zee;

    // Calling functions passing arguements as a REFERENCE while using const operator for efficiency considerations
    string pee = "\nApple ", poo = "Pie\n";
    concatenate(pee, poo);

    // Calling an inline function
    stringJoiningFunct(poo, pee);

    // Calling the divide function that has a default divisor value b set to the value 2
    cout << divide(12) << '\n';     // divide the first parameter by the default divisior of 2
    cout << divide(20, 4) << '\n';  // divide the first parameter by the overwritten divisor of 4

    return 0;   // authors consider it good practice to explicitly write the statement even though there is already an implicit return 0
}