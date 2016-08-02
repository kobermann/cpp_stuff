#include <iostream>

//Note: The fixed width integer int8_t is usually treated the same 
//as a signed char in C++, so it will generally print as a char instead of an integer.

int main( int argc, char** argv)
{
    std::cout << "----------------------------------- \n character test" << std::endl;
    char ch1(97);
    std::cout << "char ch1(97) = " << ch1 << std::endl;

    char ch2(53);
    std::cout << "char ch1(53) = " << ch2 << std::endl;
    
    std::cout << "static_cast<int> (ch1) = " << static_cast<int> (ch1) << std::endl;
    
    std::cout << "----------------------------------- \n literal test" << std::endl;
    
    int hex1 = 0x12;
    int hex2 = 0xFF;
    std::cout << "0x12 = " << hex1 
            << "\n0xFF = " << hex2 << std::endl;

    std::cout << "----------------------------------- \n binary test" << std::endl;
    int bin1 = 0b11;
    std::cout << "0b11 = " << bin1 << std::endl;
}
