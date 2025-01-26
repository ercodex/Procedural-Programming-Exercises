// C++ code to demonstrate dynamic memory allocation and pointer arithmetic.

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    int *p = new int[size];

    for(int i = 0; i < size; ++i){
        (p)++;
        cout << p << endl;
    }
    
    delete[] p;
    return 0;
}