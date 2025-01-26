// C++ code to use pointers with structures.

#include <iostream>
using namespace std;

struct example{
    int i;
    float f;
    char ch;
};

int main(){
    example x;
    example *p = &x;

    x.i = 42;
    cout << "Integer's value using pointer: " << (*p).i << endl;

    x.f = 3.1;
    cout << "Float's value using pointer: " << (*p).f << endl;

    x.ch = 'e';
    cout << "Char's value using pointer: " << (*p).ch << endl;

    // Here is another notation:
    cout << endl;
    cout << p -> i << endl;
    cout << p -> f << endl;
    cout << p -> ch << endl;

    cout << "\nAddresses in order: " << endl;
    cout << &((*p).i) << endl;
    cout << &((*p).f) << endl;
    cout << &((*p).ch) << endl;
    
    return 0;
}