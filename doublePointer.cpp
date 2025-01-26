// This program uses double pointers.

#include <iostream>
using namespace std;

int main(){
    int x = 42;
    int *ptr = &x;
    int **ptr_ = &ptr;

    system("cls");
    cout << "Variable's value (x): " << x << endl;
    cout << x << " with pointer (*ptr): " << *ptr << endl;
    cout << x << " with double pointer (**ptr_): " << **ptr_ << endl;
    
    cout << "-----------------------------------------------------" << endl;
    
    cout << "Variable's address (&x): " << &x << endl;
    cout << "Variable's address with pointer (ptr): " << ptr << endl;
    cout << "Double pointer's value == Pointer's address(ptr_): " << ptr_ << endl;   
    
    cout << "-----------------------------------------------------" << endl;
    
    cout << "Pointer's address (&ptr): " << &ptr << endl;
    cout << "Double pointer's address (&ptr_): " << &ptr_ << endl;
    cout << "\n";

    return 0;
}