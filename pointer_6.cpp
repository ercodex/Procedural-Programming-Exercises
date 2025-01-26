// Copy one array to another using pointers. Extra = Functions!

#include <iostream>
#define SIZE 5
using namespace std;

void copy_array(int *arr1, int *arr2, int size);

int main(){
    int arr1[SIZE] = {2, 3, 5, 7, 11}; 
    int arr2[SIZE];
    copy_array(arr1, arr2, SIZE);
    return 0;
}

void copy_array(int *arr1, int *arr2, int size){
    int *p1 = arr1;
    int *p2 = arr2;
    
    for(int i = 0; i < size; ++i){
        *p2 = *p1;
        ++p1, ++p2;
        cout << arr2[i] << " ";
    }
}