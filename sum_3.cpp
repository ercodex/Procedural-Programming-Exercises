// C++ program to find the sum of first N numbers.
// With macros! Faster!

#define SUM(N) ((N)*(N+1))/2;
#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "Sum of first " << N << " numbers is " << SUM(N);
    
    return 0;
}