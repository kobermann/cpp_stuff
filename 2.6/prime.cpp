#include <iostream>
#include <string>

using namespace std;

/*
 * This method (maybe!) lacks optimization:
 * If a vaild divisor is found, all his multiples
 * should be ignored from further observation. 
 */
bool isPrime( int number )
{
    int i(2);
    
    //do not check numbers after n/2, because 
    //only whole numbers are observed.
    //return false, if divisor is found.
    while( i < number / 2 )
    {
        if( number % i == 0 ) return false;
        i++;
    }
    
    return true;
}

int main( int argc, char** argv )
{
    cout << "+------------------------------------------------+" << endl;
    cout << "|                                                |" << endl;
    cout << "| I will check, if your input is a prime number! |" << endl;
    cout << "|                                                |" << endl;
    cout << "+------------------------------------------------+" << endl;
    
    while( true )
    {
        cout << " Give me a whole number (type 'q' to quit): ";
        string input;
        getline( cin, input);
        
        //quit
        if( input.compare("q") == 0 ) return 0;
        
        int number = atoi( input.c_str() );
        
        if( isPrime( number ) )
        {
            cout << "This number is a prime number." << endl;
        }
        else{
            cout << "This number is not a prime number." << endl;
        }
    }
    
    return 0;
}
