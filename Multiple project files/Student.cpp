#include "Student.h"
#include <iostream>

using namespace std;

void Student::Fill() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter surname: ";
    cin >> surname;
    cout << "Enter age: ";
    cin >> age;

}

void Student::Print() {
    cout << number << ". ";
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Age: " << age << endl;

}

void Student::FillPoints() {
    for (int i = 0; i < sizePoints; i++)
    {
        points[i] = 4 + rand() % 8;
    }
}

void Student::PrintPoints() {
    for (int i = 0; i < sizePoints; i++)
    {
        cout << points[i] << " ";
    }
}