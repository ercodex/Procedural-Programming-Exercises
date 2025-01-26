// C++ code to practice pointers with arrays.

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2, 4, 1, 3, 5};
    int *ptr = arr;

    cout << "Value before: " << *ptr << endl;
    cout << "Address before: " << ptr << endl;
    ptr++;

    cout << "Value after: " << *ptr << endl;
    cout << "Address after: " << ptr << endl;
    
    return 0;
}