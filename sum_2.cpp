// C++ program to find the sum of first N numbers (without Gauss).

#include <iostream>
using namespace std;

int sum(int N, int result);

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << sum(N, 0);
    return 0;
}

int sum(int N, int result){
    if (N <= 0) return result;
    result += N;
    return sum(N-1, result);
}
