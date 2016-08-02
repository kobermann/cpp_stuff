#include <iostream>
#include <string>

/**
 * 
 * Muss double sein und kein int, aber ist egal...
 * 
 */


std::string readUserInput()
{
    std::string user_input;
    std::getline ( std::cin, user_input );
    std::cout << std::endl;
    
    return user_input;
}

int main( int argc, char** argv)
{
    std::string user_input;
    
    std::cout << "Enter the first number:";
    user_input = readUserInput();
    int a = atoi( user_input.c_str() );
    
    std::cout << "Enter the second number:";
    user_input = readUserInput();
    int b = atoi( user_input.c_str() );
    
    std::cout << "Which action to perform? (+,-,/,*):";
    user_input = readUserInput();
    
    if( user_input == "+")
    {
        std::cout << a << " + " << b << " = " << a + b << std::endl;
    }
    else if( user_input == "-")
    {
        std::cout << a << " - " << b << " = " << a - b << std::endl;
    }
    else if( user_input == "/")
    {
        if( b == 0 )
        {
            std::cerr << "\'b\' is 0. Cannot divide by zero! " << std::endl;
            
            return 1;
        }
        std::cout << a << " / " << b << " = " << a / b << std::endl;
    }
    else if( user_input == "*")
    {
        std::cout << a << " * " << b << " = " << a * b << std::endl; 
    }
    else
    {
        std::cerr << "Unkown mathematical operation..." << std::endl;
    
        return 1;
    }
    
    return 0;
}
