#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 10;
    b = 4;
    a = b;
    b = 7;

    cout << "a:";
    cout << a;
    cout << " b:";
    cout << b;

    /*
    Arithemetic Operators
    + addition
    - subtraction
    * multiplication
    / division
    % modulo
    */

    // Compound assignments and their equivalence
    int y, x, price, units;
    y += x;                     y = y + x;
    x -= 5;                     x = x - 5;
    x /= y;                     x = x / y;
    price *= (units + 1);	    price = price * (units+1);

   // Relational and comparision operators ( == != > < >= <=)
    int c;
    cout << (7 == 5);   // evaluates to false
    cout << (5 > 4);    // evaluates to true
    cout << (3 !=2);    // evalutes to true
    cout << (6 >= 6);   // evalutes to true
    cout << (5 < 5);    // evalutes to false

    (a == 5);    // evaluates to false, since a is not equal to 5
    (a*b >= c);   // evaluates to true, since (2*3 >= 6) is true
    (b+4 > a*c);  // evaluates to false, since (3+4 > 2*6) is false
    ((b=2) == a); // evaluates to true 

    // Logical Operators (! && ||)
    !(5 == 5);   // evaluates to false because the expression at its right (5 == 5) is true
    !(6 <= 4);   // evaluates to true because (6 <= 4) would be false
    !true;       // evaluates to false
    !false;      // evaluates to true

    ((5 == 5) && (3 > 6)); // evaluate to false (true && false)
    ((5 == 5) || (3 > 6)); // evaluates to true (true || false)

    /*
    &&: if the left-hand side expression is false, the combined result is false (the right-hand side expression is never evaluated)
    ||: if the left-hand side expression is true, the combined result is true (the right-hand expression is never evaluated)
    */

    // Conditional ternary operator (?)
    // condition ? result1 : result2
    // if condition is true, the entire expression evaluates to result1, and otherwise to result2

    7 == 5 ? 4:3;       // evaluates to 3, since 7 is not equal to 5.
    7 == 5 + 2 ? 4 : 3; // evaluates to 4, since 7 is equal to 5+2.
    5 > 3 ? a : b;      // evaluates to the value of a, since 5 is greater than 3.
    a > b ? a : b;      // evaluates to whichever is greater, a or b.

    a = 2;
    b = 7;
    c = (a > b) ? a : b;

    cout << c << '\n';

    // Comma operator (,)
    a = (b=3, b+2);
    // it will first assign b to 3, and then assign b+2 to the variable a

    // Bitwise operators (& | ^ ~ << >>)
    /*
    & AND
    | OR
    ^ XOR
    ~ NOT
    << SHL Shift bits left
    >> SHP Shift bits right
    */

   // Explicit type casting operator - Allows to convert a value of a given type to another type.
   int i;
   float f = 3.14;
   i = (int) f; // i will take the value of 3 while the remainder of .14 is lost.

   // sizeof - return the size in bytes of the type or object
   x = sizeof (char);
   
}