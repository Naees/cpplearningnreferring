#include <iostream>
using namespace std;

// Template
namespace identifier
{
    // named_entities
}

// Example
// Namespaces allowus to group named entities that otherwise would have global scope into narrower scopes, giving them namespace scope.
namespace myNamespace
{
    int a, b;
    // to access the namespace 
    // myNamespace::a
}

namespace foo
{
    int value()
    {
        return 5;
    }
}

namespace bar
{
    const double pi = 3.1416;
    double value(){return 2*pi;}
}

int main()
{
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n';
}