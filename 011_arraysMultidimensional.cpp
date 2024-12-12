// Multidimensional arrays - Arrays of arrays
#include <iostream>
using namespace std;
#define WIDTH 5
#define HEIGHT 3

// lets initialize a bidimensional array (3x5 elements) - 3 rows and 5 columns
 int biarray[3][5];
int howToReference = biarray[1][3]; // this references a element in row 1 and 3 column (the second row and the fourth column of the bidimensional array).

// Multidimensional arrays are not limited to two indices - memory needed for an array increases exponentially with each dimension
// char century [100][365][24][60][60];    // This would simply comsume more than 3 GB of memory - commented out for that reason

// multidimensional arrays are just an abstraction for programmers
int example1 [3][5];
int example2 [15];

// pseudo-multidimensional array
int aPerson [HEIGHT * WIDTH];   // int aPerson[HEIGHT][WIDTH];
int n,m;
int main()
{
    for (n=0; n<HEIGHT; n++)
    {
        for (m=0; m<WIDTH; m++)
        {
            aPerson[n*WIDTH+m] = (n+1)*(m+1);   // aPerson[n][m] = (n+1)*(m+1);
        }
    }
}