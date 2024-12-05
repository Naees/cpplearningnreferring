/*
What are streams
stream      description
cin         standard input stream
cout        standard output stream
cerr        standard error (output) stream
clog        standard logging (output) stream
*/

#include <iostream>
#include <string>
#include <sstream>  // Stringstream - allows a string to be treated as a stream
using namespace std;

int main()
{
    // **Standard input (cout)**
    int x;
    cout << "Output sentence";  // prints Output sentence on screen
    cout << 120;                // prints number 120 on screen
    cout << x;                  // prints the value of x on screen

    string Hello;
    cout << "Hello";
    cout << Hello;

    // Chaining couts with insertion operations (<<)
    int age, zipcode;
    cout << "This " << "is a " << "single C++ statement";   // prints "This is a single C++ statement"
    cout << "I am " << age << "years old and my zipcode is " << zipcode; // similar to the previous statement

    // Line breaks and endl manipulator
    cout << "First sentence. \n";
    cout << "Second sentecen. \nThird sentence.";
    cout << "First sentence." << endl;
    cout << "Second sentence." << endl;



    // **Standard input (cin)**
    cin >> age;

    // i/o example
    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i*2 << endl;
    
    int a,b;
    cin >> a >> b;  // standard input (cin) can also be chained

    // The line above is equivalent to the two subsequent lines below
    cin >> a;
    cin >> b;



    // ** cin and strings **
    string mystr;
    cout << "What's your name?";
    getline (cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your favourite team? ";
    getline(cin, mystr);
    cout << "I like " << mystr << " too! \n";
    

    // **stringstream**    Stringstream - allows a string to be treated as a stream
    string aString("1204");
    int myint;
    stringstream(aString) >> myint;   // convert strings to numerical values and vice versa

    // example
    string mystring;
    float price=0;
    int quantity=0;

    cout << "Enter price: ";
    getline (cin,mystring);
    stringstream(mystring) >> price;
    cout << "Enter quantity: ";
    getline(cin, mystring);
    stringstream(mystring) >> quantity;
    cout << "Total price: " << price * quantity << endl;
    return 0;
}