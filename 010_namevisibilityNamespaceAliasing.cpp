#include <iostream>
using namespace std;

namespace current_name
{
    int exampleVar = 10;
}

// Existing namespaces can be alised with new names, with the fofllowing syntax
int main()
{

    namespace new_name = current_name;
}