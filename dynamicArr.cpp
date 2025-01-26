// C++ code to declare a dynamic array.

#include <iostream>
using namespace std;

int main(){
    int *arr = new int[5]{3, 2, 1, 0, -1};
    for(int i = 0; i < 5; ++i){
        cout << *arr << endl;
        ++arr;
    }
    
    delete[] arr;
    return 0;
}