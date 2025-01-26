#include <iostream>
using namespace std;

int main() {
    string s = "sabghgbaft";
    char arr[9]; // Dizinin boyutunu artırdık
    int n = 0;
    int lastIndex = s.length() - 1;
    
    for (int i = 0; i < 5; i++) {
        if (s[i] == s[lastIndex - n]) {
            arr[i] = s[i];
            arr[lastIndex - n] = s[lastIndex - n];
            n++; // Her atamadan sonra n değerini artırın
        }
    }
    
    for (int j = 0; j < n * 2; j++) { // Sadece atanan elemanları yazdırmak için n * 2 kullandık
        cout << arr[j];
    }
    
    return 0;
}
