// Jump statements allow altering the flow of a program by performing jumps to specific locations
#include <iostream>
using namespace std;

int main(){

// break - leaves a loop 
cout << "\n" << "<break jump statement example>" << "\n";
for (int n=10; n>0; n--)
{
    cout << n << ", ";
    if (n==3)
    {
        cout << endl << "Countdown aborted!!" << endl;
        break; // break jump statement
    }
}

// continue - skip the rest of the loop in the current iteration and jumps to the following iteration of the loop
cout << "\n" << "<continue jump statement example>" << "\n";
for (int n=10; n>0; n--){
    cout << n << ", ";
    if (n==5)
    {
        cout << endl << "BLASTERS SYSTEM ENGAGED!!";
        continue; // continue jump statement
    }
    if (n==1){
        cout << endl << "LIFTOFF!! \n";
    }
}
// goto - allows to make a absolute jump to another point in the program in the program
// it ignores nesting leves and does not cause any automatic stack unwinding
int n=20;
cout << "\n" << "<GOTO jump statement example>" << "\n";
mylabel:
    cout << "Goto Jump Triggered" << endl;
    cout << n << ", ";
    n--;
    if (n>0) goto mylabel;
    cout << "Systems Operations Complete!";
}