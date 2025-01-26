// Calculates factorial.

#include <iostream>
using namespace std;

int main(){
    int result = 1, n = 5;
    for (int i = 1; i <= n; ++i){
        result *= i;
    }
    cout << result;
    return 0;
}