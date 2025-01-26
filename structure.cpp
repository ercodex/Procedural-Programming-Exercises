// C++ code to train the usage of structures.

#include <iostream>
using namespace std;

struct country{
    string name;
    int population; // In millions
    float power;
};


int main(){

    country myCountry;

    myCountry.name = "Turkiye";
    myCountry.population = 85;
    myCountry.power = 9.99;

    cout << myCountry.name << endl;
    cout << myCountry.population << endl;
    cout << myCountry.power << endl;

    //Or you can initialize it like this

    country myCountry2 = {"Germany", 83, 12.6};

    cout << myCountry2.name << endl;
    cout << myCountry2.population << endl;
    cout << myCountry2.power << endl;
    
    return 0;
}