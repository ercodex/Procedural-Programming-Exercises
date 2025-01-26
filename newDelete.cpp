// C++ code to learn new and delete operators.

#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    int *ptr = new int(x);
    cout << "Address of stored value is: " << ptr << endl;
    cout << "Stored value is: " << *ptr << endl;
    
    int *ptr2 = new int[5];
    cout << "Now for an array..." << endl;

    for(int i = 0; i < 5; ++i){
        cout << "Enter value " << i << ": ";
        cin >> ptr2[i];
    }
    
    cout << "Stored array" << endl;
    for(int i = 0; i < 5; ++i){
        cout << "Adress of element " << i << ": " << &ptr2[i] << endl; 
        cout << "Value of element " << i << ": " << ptr2[i] << endl; 
        cout << endl;
    }

    delete ptr;// deallocate the memory to prevent memory leak
    delete ptr2;

    return 0;
}