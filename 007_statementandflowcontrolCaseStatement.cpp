// case switch
/*
code>switch (expression)

{

  case constant1:

     group-of-statements-1;

     break;

  case constant2:

     group-of-statements-2;

     break;

  .

  .

  .

  default:

     default-group-of-statements

}
*/

#include <iostream>
using namespace std;

int main()
{
    int aValue;
    do 
    {
        cout << "Enter choose between a value 1 or 2, enter 0 if you want to quit the quiz: ";
        cin >> aValue;
        cout << "You entered: " << aValue << "\n";

        if (cin.fail())
        {
            cin.clear();    // clear error flag
            cin.ignore(1000, '\n'); // Ignore the invalid input
            cout << "Invalid input. Please enter a number. \n";
            continue;   // restart the loop
        }

        switch(aValue)
        {
        case 1:
            cout << "You have guessed the correct answer, congrats!!" << endl;
            break;
        case 2:
            cout << "You have choosen the value " << aValue << " that is unfortunately the wrong guess.. " << endl;
            break;
        case 0:
            cout << "Exiting program, Thank you for answering the quiz!";
            break;
        default:
            cout << aValue << " is not in the given options, please try again... \n";
        }
    } while(aValue != 0);
    return 0;
}