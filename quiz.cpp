// C++ programming quiz.

#include <iostream>
using namespace std;

int main(){
    char arr[100];
    cout << "Enter input: " << endl;
    int i = 0;
    int j;
    
    while(arr[i] != '\0'){
        if(arr[i] > 64 && arr[i] < 91){
            cin >> arr[i];
            arr[i] = arr[i] + 32;
        }
        else{
            cin >> arr[i];
        }
        i++;
    }
    for(j = 0; j<i; j++){
        cout << arr[i-j];
    }
    return 0;
}