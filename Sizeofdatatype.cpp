#include <iostream>
using namespace std;

int main() 
{    
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "The Size of short is :"<< sizeof(short) << "bytes" << endl; 
    cout << "The Size of long is :"<< sizeof(long) << "bytes" << endl; 
    cout << "The Size of longlong is :"<< sizeof(long long) << "bytes" << endl; 
    cout << "The Size of longdouble is :"<< sizeof(long double) << "bytes" << endl; 
    cout << "The Size of bool is :"<< sizeof(bool) << "bytes" << endl; 
    return 0;
}
