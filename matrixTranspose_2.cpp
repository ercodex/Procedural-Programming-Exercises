// In this code, user enters a matrix and program transposes it.

#include <iostream>
using namespace std;

int main(){
    int i, j;
    
    cout << "Enter matrix size (i): ";
    cin >> i;
    cout << "Enter matrix size (j): ";
    cin >> j;
    int arr[i][j];
    int arr_t[j][i];
    for(int k = 0; k < j; ++k){
        for(int m = 0; m < i; ++m){
            cout << "Enter " << k << ", " << m << "th value: ";
            cin >> arr[m][k];
        }
    }
    
    system("cls");
    cout << "Matrix" << endl;
    cout << "------------------" << endl;
    for(int k = 0; k < j; ++k){
        cout << "\n";
        for(int m = 0; m < i; ++m){
            cout << arr[m][k] << " ";
        }
    }
    
    cout << "\n";
    cout << "Transposed Matrix" << endl;
    cout << "------------------" << endl;
    
    for(int k = 0; k < j; ++k){
        for(int m = 0; m < i; ++m){
            arr_t[k][m] = arr[m][k];
        }
    }
    
    for(int k = 0; k < j; ++k){
        cout << "\n";
        for(int m = 0; m < i; ++m){
            cout << arr_t[m][k] << " ";
        }
    }
    return 0;
}