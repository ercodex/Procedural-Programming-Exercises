// C++ code to shift an array n times.

#include <iostream>
using namespace std;

int main(){
    int arr[] = {32, 31, 30, 29, 28, 27, 26};
    int arr2[7];
    int k, ctr = 0;

    cout << "Enter number of shifts: ";
    cin >> k;

    for(int i = 0; i < 7; ++i){
        arr2[i] = arr[(i+k)%7];
        cout << arr2[i] << " ";
    }
    
    return 0;
}