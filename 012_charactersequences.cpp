#include <iostream>
using namespace std;

char foo[20];   // this array foo can hold up to 20 elements of type char

// null character - \0 (backslash, zero)
/* Used to represent the end of string represented in character sequences*/


char myWordOne[] = {'H', 'e', 'l', 'l', 'o', '\0'};
// an alternative to initialize with a null-terminated sequences of characters are by using ("") string literals
char myWordTwo[] = "Hello"; // string literals like this will have a (\0) automatically appended at thte end
// myWord = "Bye"; - these two examples will not word as myWord is an array and follows the rules of one
// myWord[] = "Bye";
char myWord[] = { };

int main()
{
    // this instead would be the right way to access the values after declaration
    myWord[0] = 'B';
    myWord[1] = 'y';
    myWord[2] = 'e';
    myWord[3] = '\0';

    char question1[] = "What is your name? ";
    string question2 = "Where do you live ";
    char answer1[80];
    string answer2;
    cout << question1;
    cin >> answer1;
    cout << question2;
    cin >> answer2;
    cout << "Hello, " << answer1;
    cout << " from " << answer2 << "!\n";

    // Null-terminated character sequenece can be transformed into strings implicitly, vice versa.
    char myntcs[] = "some text";
    string myString = myntcs;   // convert c-string to string
    cout << myString << endl;   // printed as a library string
    cout << myString.c_str();   // printed as a c-string
    
    return 0;
}
