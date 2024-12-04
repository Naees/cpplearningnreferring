// Initialization of variables
#include <iostream>
using namespace std;

/*
When the variables in the example above are declared, they have an undetermined value until they are assigned a value for the first time. 
But it is possible for a variable to have a specific value from the moment it is declared. This is called the initialization of the variable.
*/

int main()
{
    int a = 5;  // c-like initialization
    int b(3);   // constuctor initialization
    int c{2};   // uniform initialization
    int result;

    a = a + b;
    result = a - c;
    cout << result;

    return 0;
}