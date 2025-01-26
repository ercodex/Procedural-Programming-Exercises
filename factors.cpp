// C++ code to find factors of numbers. 

#include <iostream>
using namespace std;

int main(){
    int x, arr[1000];
    cout << "Enter a number lower than 1000: " << endl;
    cin >> x;
    int j = 0;

    for(int i = 1; i <= x; ++i){
        if(x%i == 0){
            arr[j] = i;
            j++;
        }
    }

    cout << x << "'s factors are:";
    for(int i = 0; i < j; ++i){
        cout << "  " << arr[i];
    }

    return 0;
}