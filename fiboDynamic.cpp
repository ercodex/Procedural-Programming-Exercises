// Fibonacci sequence with dynamic allocation.

#include <iostream>
using namespace std;
int main(){
    int arr[25];
    arr[0] = 1;
    arr[1] = 1;
    for (int j = 2; j < 25; j++){
        arr[j] = arr[j-1] + arr[j-2];
        cout << j+1 << "th element is: " << arr[j] << endl;
    }
    return 0;
}