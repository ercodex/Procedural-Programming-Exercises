#include <iostream>
#define SIZE 5
using namespace std;

int main(){
    int arr[SIZE] = {34, 26, 67, 81, 6};
    int *p = arr; //Now, "p" refers to the first element of the array which is "34"
    
    for(int i = 0; i < SIZE; ++i){
        cout << *p << endl;
        ++p;
    }
    
    return 0;
}