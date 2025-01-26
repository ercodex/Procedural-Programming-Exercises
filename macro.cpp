// This code uses macros to define operations like functions.

#include <iostream>
using namespace std;

#define pow(x) x*x
#define sum(a, b) a+b
#define sub(a, b) a-b
#define div(a, b) a/b
#define mul(a, b) a*b

int main(){
    double x, a, b;
    int op;
    string s0 = "1) Square of x";
    string s1 = "2) Sum of a and b";
    string s2 = "3) subtract a and b";
    string s3 = "4) Divide a by b";
    string s4 = "5) Multiply a by b";
    
    system("cls");
    cout << "Select operation (-1 to exit): " << endl;
    
    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cin >> op;

    switch(op){
        case 1: 
            system("cls");
            cout << "Enter value: ";
            cin >> x;
            cout << pow(x);
            break;
        case 2:
            system("cls");
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;
            cout << sum(a, b);
            break;
        case 3:
            system("cls");
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;
            cout << sub(a, b);
            break;
        case 4:
            system("cls");
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;
            cout << div(a, b);
            break;
        case 5:
            system("cls");
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;
            cout << mul(a, b);
            break;
        default:
            break;
    }
    return 0;
}