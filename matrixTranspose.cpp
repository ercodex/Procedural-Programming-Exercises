#include <iostream>
using namespace std;

int main(){
    int i, j;
    
    cout << "Enter matrix size (i): ";
    cin >> i;
    cout << "Enter matrix size (j): ";
    cin >> j;

    // Dinamik boyutlu diziler için bellekten yer ayırma
    int **arr = new int*[i];
    int **arr_t = new int*[j];
    
    for(int k = 0; k < i; ++k){
        arr[k] = new int[j];
    }
    
    for(int k = 0; k < j; ++k){
        arr_t[k] = new int[i];
    }

    for(int k = 0; k < j; ++k){
        for(int m = 0; m < i; ++m){
            cout << "Enter " << m << ", " << k << "th value: ";
            cin >> arr[m][k];
        }
    }
    
    system("cls");
    cout << "\nMatrix" << endl;
    cout << "------------------" << endl;
    for(int k = 0; k < j; ++k){
        cout << "\n";
        for(int m = 0; m < i; ++m){
            cout << arr[m][k] << " ";
        }
    }
    cout << "\n";
    for(int p = 0; p < i; ++p){
        if(p+1 == i){
            cout << j << "x" << i << endl;
        }
        else{
            cout << "   ";
        }
    }
    
    cout << "\nTransposed Matrix" << endl;
    cout << "------------------" << endl;
    
    for(int k = 0; k < j; ++k){
        for(int m = 0; m < i; ++m){
            arr_t[k][m] = arr[m][k];
        }
    }
    
    for(int k = 0; k < i; ++k){
        cout << "\n";
        for(int m = 0; m < j; ++m){
            cout << arr_t[m][k] << " ";
        }
    }
    cout << "\n";
    for(int p = 0; p < j; ++p){
        if(p+1 == j){
            cout << i << "x" << j << endl;
        }
        else{
            cout << "   ";
        }
    }

    // Dinamik olarak ayrılan belleği serbest bırakma
    for(int k = 0; k < i; ++k){
        delete[] arr[k];
    }
    
    for(int k = 0; k < j; ++k){
        delete[] arr_t[k];
    }

    delete[] arr;
    delete[] arr_t;

    return 0;
}
