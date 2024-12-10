#include <iostream>
using namespace std;

int foo;    // a global variable]

int some_function()
{
    int bar;    // local variable within some_function() block
    bar = 0;
    return 0;
}

int other_function()
{
    foo = 1;    // ok: foo is a global variable
    // bar = 2;    // wrong: bar is not visiable from this function
    return 0;
}


int main()
{
    int x = 10; // x and y belongs to main block
    int y = 20;

    {
        int x; 
        x = 50; // sets x (inner) to the value of 50
        y = 50; // set (outter) y into int value 50
        cout << "Inner block: \n";
        cout << "x: " << x << '\n';
        cout << "y: " << y << '\n';
    }
    cout << "Outer block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    return 0;
}