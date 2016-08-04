#include <iostream>
#include "io.h"

int main(int argc, char** argv)
{
    int amountOfNumbers; 
    int* numbers;
    bool correctInput(false);
    
    while(!correctInput)
    {
        std::string inputString;
        //user defines the amount of numbers
        std::cout << "How much numbers to work with: ";
        std::getline(std::cin, inputString);
        
        /*
         * 
         * NEVER EVER USE std::cin << AND std::getline() TOGETHER!!!
         * 
         */
        amountOfNumbers = atoi( inputString.c_str() );
        numbers = new int[amountOfNumbers]; 
        
        //just for the transparency
        int i(0);
        
        //aks the user to input the separate numbers in a row...
        while(i < amountOfNumbers)
        {
            numbers[i] = readNumber(i+1);
            i++;
        }
        
        //present the array and ask if it's okay
        printArray(numbers, amountOfNumbers);
        correctInput = askUser();
    }
    
    int sum;
    sum = sumArray(numbers, amountOfNumbers);
    
    writeAnswer(sum);

    return 0;
}
