// C++ code to practice pointers.

#include <iostream>
using namespace std;

int main(){
    int x = 42;
    int *ptr = &x;

    cout << "Value before: " << *ptr << endl;
    cout << "Address before: " << ptr << "\n\n";
    
    ptr++; 
    cout << "Value before: " << *ptr << endl;
    cout << "Address before: " << ptr << "\n\n";
    
    ptr = &x;
    
    *ptr = 21;
    cout << "Value before: " << *ptr << endl;
    cout << "Address before: " << ptr << endl;


    return 0;
}