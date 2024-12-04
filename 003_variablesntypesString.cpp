// My first string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystring;
    mystring = "This is my first string";

    /*
    As you can see in the previous example, strings can be initialized with any valid string literal, just like numerical type variables can be initialized to any valid numerical literal. As with fundamental types, all initialization formats are valid with strings:

    string mystring = "This is a string";
    string mystring ("This is a string");
    string mystring {"This is a string"};

    Strings can also perform all the other basic operations that fundamental data types can, like being declared without an initial value and change its value during execution:
    */

    cout << mystring << endl;

    mystring = "Now a different string";
    cout << mystring << endl;
    return 0;

}
