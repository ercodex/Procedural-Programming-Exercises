// C++ code to practice pointers.

#include <iostream>
using namespace std;

int main(){
    system("cls");
    
    string fruit = "Pineapple";
    string* ptr_fruit = &fruit;

    int price = 8;
    int* ptr_price = &price;

    double weight = 2.5;
    double* ptr_weight = &weight;

    cout << "Fruit name is hold at location " << &fruit << endl;
    cout << "Fruit " << *ptr_fruit << " is printed with a pointer" << endl;
    
    cout << "Fruit price is hold at location " << &price << endl;
    cout << "Fruit price " << *ptr_price << " dollars is printed with a pointer" << endl;
    
    cout << "Fruit weight is hold at location " << &weight << endl;
    cout << "Fruit weight " << *ptr_weight << " is printed with a pointer" << endl;
    
    return 0;
}