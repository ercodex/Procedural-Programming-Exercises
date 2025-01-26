// Initialize an array and print it via using pointers. Extra = Functions!
#include <iostream>
using namespace std;

void array_creator(int *arr, int size);

int main(){
    const int SIZE = 3;
    int arr[SIZE];
    array_creator(arr, SIZE);

    return 0;
}

void array_creator(int *arr, int size) {
    for(int i = 0; i < size; ++i){
        cout << "Enter value " << i << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
}