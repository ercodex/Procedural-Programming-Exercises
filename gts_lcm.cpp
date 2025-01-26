// Finds GTS and LCM by just finding GTS.
// Uses mathematical definition of GTS*LCM == num1*num2

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x, y, GTS;
    cout << "Enter the small number: ";
    cin >> x;
    cout << "Enter the big number: ";
    cin >> y;
    for(int i = 1; i <= x; ++i){
        if((x%i == 0) && (y%i == 0)){
            GTS = i;
        }
    }
    cout << "GTS: " << GTS << endl;
    cout << "LCM: " << (x*y)/GTS << endl;
    return 0;
}