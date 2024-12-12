#include <iostream>
#include <array>
using namespace std;

// parameter declared as the array type
// void procedure (int arg []);

// declare array as 
int myarray [40];

void printarray (int arg[],int size)
{
    for (int n=0; n < size; ++n)
    {
        cout << arg[n] << ' ';
    }
    cout << '\n';
}

int main()
{
    int firstArray[] = {5, 10, 15};
    int secondArray[] = {2, 4, 6, 8, 10};
    
    // example of calling the function taking in an array as its parameter
    // procedure (myarray);

    printarray(firstArray, sizeof(firstArray)/sizeof(firstArray[0])); // To determine the number of elements in the array, divide the total size by the size of one element:
    printarray(secondArray, sizeof(secondArray)/sizeof(secondArray[0]));
}
