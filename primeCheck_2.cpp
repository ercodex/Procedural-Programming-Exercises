// C++ program for checking a number being a prime number.
// (6 +- 1) method. Logical for big numbers

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

int main() {
    int number = 16273;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}

bool isPrime(int n){
    if (n <= 1) return false; // 1 ve negatif sayılar asal değildir
    if (n <= 3) return true; // 2 ve 3 asal sayılardır
    if (n % 2 == 0 || n % 3 == 0) return false; // 2 ve 3'e bölünebilen sayılar asal değildir

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}
