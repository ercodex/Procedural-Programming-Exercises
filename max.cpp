// C++ code to find the max of a matrix.

#include <iostream>
using namespace std;

int main(){
    double arr[6] = {3.4, 5.8, 1.3, 9.4, 2.9, 6.3};
    double max = 0;

    for(int i = 0; i < sizeof(arr)/8; ++i){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Array size is: " << sizeof(arr)/8 << endl;
    cout << "Highest value is: " << max << endl;
    return 0;
}// And vice versa for minimum.