#include <iostream>
using namespace std;

// Function Templates
template <class SomeType>   // template parameters enclosed in angle-brackets <>
// template <template-parameters> function-declaration
SomeType sum(SomeType a, SomeType b)
{
    return a+b;    
}

// An example
template <class T>
T sumExample (T a, T b)
{
    T result;
    result = a + b;
    return result;
}

// Final example
template <class T, class U>
void are_equal(T a, U b)
{
    if (a==b)
    {
        cout << "\nx and y are equal.\n";
    }
    else
    {
        cout << "\nx and y are not equal.\n";
    }
}

int main()
{
    int i=5, j=6, k;
    double f=2.0, g=5.0, h;

    k=sumExample<int>(i, j);    // can be written as k=sumExample(i,j)
    h=sumExample<double>(f,g);  // can be written as h=sumExample(f,g)

    cout << k << "\n";
    cout << h << "\n";

    // Final example for template functions
    are_equal(10,10.0);
    return 0;
}