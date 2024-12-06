#include <iostream>
using namespace std;

int main()
{
    int x{100};
    if (x == 100)
        cout << "x is 100"; // single line if statement

    if (x == 100)
    {
        cout << "x is " 
        << x << endl;
    }

    return 0;
}