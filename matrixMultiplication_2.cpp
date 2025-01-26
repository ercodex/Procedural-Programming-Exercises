// This code prints the multiplication matrix.

#include <iostream>
using namespace std;

int main(){
    system("cls");
    int i, j, arr[10];
    
    for(i = 0; i < 10; ++i){
        arr[i] = i+1;
    }

    for(i = 0; i < 9; ++i){
        for(j = 0; j < 9; ++j){
            cout << j+1 << "x" << i+1 << " = " << arr[i] * arr[j];
            if(arr[i] * arr[j] > 9){
                cout << " ";
            }
            if(arr[i] * arr[j] <= 9){
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}