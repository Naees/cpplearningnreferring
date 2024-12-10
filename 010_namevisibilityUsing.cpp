#include <iostream>
using namespace std;

namespace first
{
    int x = 5;
    int y = 10;
}

namespace second
{
    double x = 3.1416;
    double y = 2.7183;
}

int exampleOne();
int exampleTwo();
int exampleThree();

int main()
{
    exampleOne();
    exampleTwo();
    exampleThree();
    return 0;
}

int exampleOne()
{
    using first::x;
    using second::y;
    cout << '\n' << x << "\n";
    cout << y << '\n';
    cout << first::y << '\n';
    cout << second::x << '\n';
    return 0;
}

int exampleTwo()
{
    using namespace first;
    cout << '\n' << x << '\n';
    cout << y << '\n';
    cout << second::x << '\n';
    cout << second::y << '\n';
    return 0;
}

namespace aaa
{
    int x = 5;
}
namespace bbb
{
    double x = 3.1416;
}

int exampleThree()  // This shows that using and using namespace only has validity in the same block
{
    {
        using namespace first;
        cout << '\n' << x << '\n';
    }
    {
        using namespace second;
        cout << x << '\n';
    }
    return 0;
}