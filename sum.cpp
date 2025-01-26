// C++ program to find the sum of first N numbers, without a loop.

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "Sum of first " << N << " numbers is " << ((N)*(N+1))/2;
    
    //Thanks to Gauss :)
    return 0;
}