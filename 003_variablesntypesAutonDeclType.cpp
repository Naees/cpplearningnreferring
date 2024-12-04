#include <iostream>
using namespace std;

int main()
{
    int foo = 0;
    auto bar = foo;     // the same as : int bar = foo;

    int pee = 0;
    decltype(pee) poo;  // the same as: int bar;'

    return 0;
}