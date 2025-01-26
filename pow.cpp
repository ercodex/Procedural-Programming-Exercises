// C++ code to practice functions.

#include <iostream>
using namespace std;

int pow(int x, int n) {
    if (n != 0) {
        return x * pow(x, n - 1);
    } else {
        return 1;
    }
}

int main() {
    cout << pow(2, 3) << endl;
    return 0;
}
