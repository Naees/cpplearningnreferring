#include <iostream>
#include <array>
using namespace std;

int languagueBuiltInArray()
{
    // language built-in array
    int myArray[3] = {10,20,30};

    for(int i=0; i<3; ++i)
    {
        ++myArray[i];
    }

    for (int elem: myArray)
    {
        cout << elem << '\n';
    }
    return 0;
}

int containerLibraryArray()
{   
    // using #include <array>
    array<int,3> myArray {10,20,30};

    for (int i=0; i<myArray.size(); ++i)
    {
        ++myArray[i];
    }

    for (int elem: myArray)
    {
        cout << elem << '\n';
    }

    return 0;
}



int main()
{   
    std::cout << "Language Built-In Array: \n";
    languagueBuiltInArray();
    std::cout << "Container Library Array: \n";
    containerLibraryArray();
}