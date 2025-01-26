// C++ code to show little-endianness.

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter 6-digit 32-bit stlye value (2 digits at a time): ";
    cin >> a;
    cin >> b; 
    cin >> c;

    int *ptr_a = &a;
    int *ptr_b = &b;
    int *ptr_c = &c;
    
    cout << "Little-Endian: "<< endl;
    cout << ptr_a << "---" << ptr_b << "---" << ptr_c << endl;
    cout << "---" << *ptr_a << "---------" << *ptr_b << "---------" << *ptr_c << endl;

    return 0;
}