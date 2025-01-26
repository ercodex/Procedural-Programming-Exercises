// C++ code to learn predefined macros.

#include <iostream>
using namespace std;

int main(){
    char file[] = __FILE__;
    char date[] = __DATE__;
    char time[] = __TIME__;
    int line = __LINE__;

    cout << "Current file name: " << file << endl;
    cout << "Current date: " << date << endl;
    cout << "Current time: " << time << endl;
    cout << "Line where this macro is defined: " << line << endl;
}