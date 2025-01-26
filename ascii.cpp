// C++ program to find out ASCII values.

#include <iostream>
using namespace std;

int main(){
    int x, num;
    char ch;

    cout << "ASCII value for: " << endl;
    cout << "0: char" << endl;
    cout << "1: figure" << endl;
    cin >> x;

    if(x == 0){
        cout << "Enter char: ";
        cin >> ch; 
        cout << "ASCII value of this char is: " << int(ch);
    }
    else if(x == 1){
        cout << "Enter figure: ";
        cin >> num;
        if(num >= 0 && num < 10){
            cout << "ASCII value of this figure is: " << num + 48;
        }
        else{
            cout << "Adam akilli sayi gir pezevenk!!!"; // Some Turkish bad words :)
        }
    }
    else{
        cout << "SelectionError";
    }
    return 0;
}