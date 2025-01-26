// This code checks whether an array is sorted or not.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of values: ";
    cin >> n;

    int arr[n];
    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool sorted = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "Array is sorted.\n";
    } else {
        cout << "Array is not sorted.\n";
    }

    return 0;
}