#include <iostream>
#include "add.h"

#define THREE 3
#define FIVE 5

int doubleNumber(int n)
{
    return n*2;
}

int main(int argc, char** argv)
{
    int number;
    
    std::cout << "Enter a number to double:";
    std::cin >> number;    
    std::cout << "The double of " << number << " is: [" << doubleNumber(number) << "]" << std::endl;
    
    std::cout << add(FIVE, THREE) << std::endl;
}
