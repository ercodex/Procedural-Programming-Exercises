// Matrix multiplication algorithm for my Linear Algebra midterm exam.

#include <iostream>
using namespace std;

int main(){
    int i, j, i2, j2;

    cout << "Enter first matrix size (i j): ";
    cin >> i >> j;

    cout << "Enter second matrix size (i j): ";
    cin >> i2 >> j2;

    if(j != i2){
        cout << "Enter valid values!";
        return 0;
    }

    int m1[i][j];
    int m2[i2][j2];
    int result[i][j2];

    system("cls");
    cout << "Fill Matrix 1 " << "(size " << i << ", " << j << ")" << endl;

    for(int k = 0; k < i; ++k){
        for(int m = 0; m < j; ++m){
            cout << "Enter element " << k+1 << ", " << m+1 << " : ";
            cin >> m1[k][m];
        }
    }

    system("cls");
    cout << "Fill Matrix 2 " << "(size " << i2 << ", " << j2 << ")" << endl;

    for(int k = 0; k < i2; ++k){
        for(int m = 0; m < j2; ++m){
            cout << "Enter element " << k+1 << ", " << m+1 << " : ";
            cin >> m2[k][m];
        }
    }

    // Matrices multiplication
    for(int k = 0; k < i; ++k){
        for(int m = 0; m < j2; ++m){
            result[k][m] = 0;
            for(int n = 0; n < j; ++n){
                result[k][m] += m1[k][n] * m2[n][m];
            }
        }
    }

    system("cls");
    cout << "Matrix 1";
    for(int k = 0; k < i; ++k){
        cout << endl;
        for(int m = 0; m < j; ++m){
            cout << " " << m1[k][m];
        }
    }

    cout << "\nMatrix 2";
    for(int k = 0; k < i2; ++k){
        cout << endl;
        for(int m = 0; m < j2; ++m){
            cout << " " << m2[k][m];
        }
    }

    cout << "\nMultiplied matrix: ";
    for(int k = 0; k < i; ++k){
        cout << endl;
        for(int m = 0; m < j2; ++m){
            cout << " " << result[k][m];
        }
    }

    return 0;
}
