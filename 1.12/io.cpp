#include <iostream>
#include <string>

//lets the user make an input and returns it
int readNumber(int cnt)
{
    std::string input;
    int tmp;
    
    std::cout << "Enter number #" << cnt << ": ";
    std::getline(std::cin, input);
    tmp = atoi(input.c_str());
    
    return tmp;
}

//just prints the given int
void writeAnswer(int result)
{
    std::cout << "The sum is: " << result << "." << std::endl;
}

//prints the given array
void printArray(int array[], int size)
{
    int i(0);
    std::cout << "Your Array consists following numbers: ";
    
    while(i < size)
    {
        std::cout << "[" << array[i] <<  "] ";
        i++;
    }
    std::cout << std::endl;
}

//sums the array elements
int sumArray(int array[], int size)
{
    int i(0), sum(0);
    
    while(i < size)
    {
        sum += array[i];
        i++;
    }
    
    return sum;
}

//asks user for consent
bool askUser()
{
    std::string input;
    while(true)
    {
        std::cout << "Is everything correct? (Type yes or no) : ";
        std::getline(std::cin, input);
        std::cout << std::endl;
    
        if(input == "yes")
        {
            return true;
        }
        else if(input == "no")
        {
            return false;
        }
        std::cout << "Invalid input! You must answer with [yes/no]"; std::cout << std::endl;
    }
}
