#include <iostream>
using namespace std;


int prototypeFunctionExampleOne(int first, int second); // important  to declare a function and/or variable before main so it is able to compile
int prototypeFunctionExampleTwo(int, int);  // barebones functions declared before main 

// in this example we will be using functions even and odd
void even(int x);
void odd(int x);
void oddoreven(int x);

int main()
{
    int i;
    do
    {
        cout << "Please enter a number (0 to exit): ";
        cin >> i;
        odd(i);
    }while (i!=0);
    return 0;
}

void oddoreven(int x)
{
    if ((x%2) != 0)
    {
        cout << "It is odd.\n";
    }
    else
    {
        cout << "It is even.\n";
    }
}

void odd(int x)
{
    if ((x%2) != 0)
    {
        cout << "It is odd. \n";
    }
    else
    {
        even(x);
    }
}

void even(int x)
{
    if ((x%2) == 0)
    {
        cout << "It is even. \n"; 
    }
    else
    {
        odd(x);
    }
}
