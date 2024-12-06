// Loops
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n(100);
    // A countdown using while statement
    while (n > 0){
        cout << n << ", ";
        --n;
    }
    cout << "BOOM!!" << endl << endl;
    
    // do-while loop
    // do (statement) while (condition)
    /*
    It behaves like a while-loop, 
    except that condition is evaluated after the execution of statement instead of before, 
    guaranteeing at least one execution of statement, 
    even if condition is never fulfilled. 
    */

    string aRandomString;
    do {
        cout << "Enter a random text: ";
        getline(cin, aRandomString);
        cout << "You have entered " << aRandomString << '\n';
    } while (aRandomString != "End");

    // for loop - interate a number of times
    // for (initialivation; condition; increase) statement;
    for (int n=10; n>0; n--)
    {
        cout << n << ", ";
    }
    cout << endl<< "LIFTOFF!!" << endl;

    // for loop with two counter variables
    for (int x=100, i=50; x!=i; ++x, --i)   // a for loop with a x and i counter, with x counting up and i counting down
    {
        // whatever code within
    }
    

    // Range-based for loop
    // for ( declaration : range) statement;
    string anotherRandomString = "This is a random string!";
    for (char c : anotherRandomString)
    {
        cout << endl << c << endl;
    }
    
    return 0;
}