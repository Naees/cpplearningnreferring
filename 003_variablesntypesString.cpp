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

/*
Note: inserting the endl manipulator ends the line (printing a newline character and flushing the stream).

endl
- Its is a manipulator
- It doesn't occupy any memory.
- It is a keyword and would not specify any meaning when stored in a string.
- We cannot write 'endl' in between double quotations.
- It is only supported by C++.
- It keeps flushing the queu in the output buffer throughout the process.


\n
- It is a character.
- It occupies 1 byte memory as it is a character.
- It can be stored in a string and will still convey its specific meaning of line break.
- We can write '\n' in between double quotations like std::cout<<"\n";.
- It is supported in both C and C++.
- It flushes the output buffer only once at the end of the program.
*/

}
