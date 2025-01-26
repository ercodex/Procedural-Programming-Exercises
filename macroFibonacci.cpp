/*
Turns out that, we can't define macros like that.
Project failed. Instead, I created Fibonacci Series
in classic way.
*/

#include <iostream>
using namespace std;

int main(){
    int n = 10; // İlk n Fibonacci sayısını hesaplamak için
    int a = 0, b = 1;
    int next = 0;
    cout << "Fibonacci Series: ";
    
    for(int i = 0; i < n; i++){
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    
    return 0;
}