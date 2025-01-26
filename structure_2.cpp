// C++ code to train the usage of structures. Also talks about typedef usage.

#include <iostream>
using namespace std;

typedef struct STD
{
    int age;
    double weight;
    string name;
    char grade;

} Student;

// Without typedef:

struct Computer
{
    string model_name;
    int price;
    char keyboard_type;
    double battery_health;
}/* 'Acer' would came here with typedef*/;
// Compare lines 26 and 32 with line 50 for differ between typedef usage.

int main(){
    system("cls");

    Student Eren;
    Eren.age = 19;
    Eren.weight = 70.3;
    Eren.name = "Eren";
    Eren.grade = 'B';

    Student Irem;
    Irem.age = 20;
    Irem.weight = 44.8;
    Irem.name = "Irem";
    Irem.grade = 'A';

    cout << "Student Name: " << Eren.name << endl;
    cout << "Student Age: " << Eren.age << endl;
    cout << "Student Grade: " << Eren.grade << endl;
    cout << "Student Weight: " << Eren.weight << endl;

    cout << "\nStudent Name: " << Irem.name << endl;
    cout << "Student Age: " << Irem.age << endl;
    cout << "Student Grade: " << Irem.grade << endl;
    cout << "Student Weight: " << Irem.weight << endl;

//----------------------------------------------------------

    struct Computer Acer;
    Acer.model_name = "Aspire 7";
    Acer.price = 35000;
    Acer.keyboard_type = 'Q';
    Acer.battery_health = 87.2;

    cout << "\nPc model name: " << Acer.model_name << endl;
    cout << "Pc price: " << Acer.price << endl;
    cout << "Pc keyboard type: " << Acer.keyboard_type << endl;
    cout << "Pc battery health: " << Acer.battery_health << endl;
    
    return 0;
}