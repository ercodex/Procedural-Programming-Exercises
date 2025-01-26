// This code proves the working principle of do-while loop.

#include <iostream>
using namespace std;

int main(){
    int i = 0, check = 3;
     do{
        ++i;
     } while (check < 1);
    cout << i;
    return 0;
}