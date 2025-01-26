// Reverse a matrix using pointers.

#include <iostream>
#define SIZE 5
using namespace std;

int main(){
    
    int arr[SIZE] = {2, 4, 6, 8, 10};
    cout << "Reversed matrix is: ";
    
    for(int i = 0; i < 5; ++i){
        int *p = arr;
        p = p + (4 - i);
        cout << *p << " ";
    }
    return 0;
}