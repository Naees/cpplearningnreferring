// factorial calculator
#include <iostream>
using namespace std;

long factorial (long a)
{
    if (a>1)    // base case
    {
        return (a * factorial (a-1));
        // n! = n * (n-1) * (n-2) *  (n-3) ... * 1 
    }
    }
    else
    {
        return 1;
    }
}

int main()
{
    long number = 9;
    cout << number << "! = " << factorial(number);
    return 0;
}
