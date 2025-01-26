//C++ code to calculating recursively.

#include <iostream>
using namespace std;

int factorial(int a);
int fibonacci(int a);
int summation(int a);

int y;

int main(){
    int x;

    cout << "Select process" << endl;
    cout << "1. factorial\n2. fibonacci\n3. summation\n";
    cin >> x;

    cout << "Enter value: ";
    cin >> y;

    if(x == 1){
        cout << factorial(y);
    }
    if(x == 2){
        cout << fibonacci(y);
    }
    if(x == 3){
        cout << summation(y);
    }
    return 0;
}

int factorial(int a){
    if(a <= 1){
        return 1;
    }
    else{
        return a * factorial(a - 1);
    }
}

int fibonacci(int a){
    if(a <= 1){
        return a;
    }
    else{
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}

int summation(int a){
    if(a <= 1){
        return 1;
    }
    else{
        return a + summation(a - 1);
    }
}