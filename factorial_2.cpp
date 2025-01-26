// C++ program to find the factorial of N.

#include <iostream>
using namespace std;

int factorial(int N, int result);

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << factorial(N, 1);
    return 0;
}

int factorial(int N, int result){
    if (N <= 0) return result;
    result *= N;
    return factorial(N-1, result);
}