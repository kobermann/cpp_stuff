#include <iostream>

using namespace std;

int main()
{
    cout << "+--------------------------------" << endl
         << "| sizeof() test..."   << endl;
    
    cout << "| Size of int:         " << sizeof(int)         << endl;
	cout << "| Size of float:       " << sizeof(float)       << endl;
	cout << "| Size of double:      " << sizeof(double)      << endl;	
	cout << "| Size of long double: " << sizeof(long double) << endl;
    
    double d(5.314e3);
    float  f(3.13e-4f);
    
    cout << "+-------------------------------" << endl
         << "| double/float initialization test..."   << endl;
    
    cout << "| double 5.314e3 = " << d << endl;
    cout << "| float  3.13e-4 = " << f << endl;
    
	return 0;
}
