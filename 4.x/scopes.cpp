#include <iostream>
#include "variables.h"

int add( int x, int y);

int main ()
{
    int a(23);
    std::cout << "a within block: " << a << "\n";
    std::cout << "global a: " << ::a << "\n";


    a = add(a, ::a);
    std::cout << "new a: " << a << "\n";
}
