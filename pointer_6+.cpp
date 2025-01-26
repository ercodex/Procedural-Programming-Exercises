// Copy one array to another using pointers

#include <iostream>
#define SIZE 5
using namespace std;

int main(){
    int arr1[SIZE] = {2, 3, 5, 7, 11}; 
    int arr2[SIZE]; 
    
    int *p1 = arr1;
    int *p2 = arr2;
    
    for(int i = 0; i < SIZE; ++i){
        *p2 = *p1;
        ++p1, ++p2;
        cout << arr2[*p2] << " ";
    }
    return 0;
}