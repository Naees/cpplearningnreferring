#include <iostream>
using namespace std;

int operate(int& a, int& b)
{
    return (a*b);
}

/* notice how this function has the same name as the function above, 
this is possible if the function take in diffenrent number of parameters or different parameter types.*/
double operate (double& a, double& b)
{
    return (a/b);
}

int main()
{
    int x=5, y=2;
    double n=5.0, m=2.0;
    cout << operate(x,y) << "\n";
    cout << operate(n, m) << "\n";

    return 0;
}