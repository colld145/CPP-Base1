#include "Student.h"
#include "Group.h"
#include <iostream>

using namespace std;

void Student::AddNewStudent() {
	cout << "Enter name: " << endl;
	cin >> name;
	cout << "Enter surname: " << endl;
	cin >> surname;
}

void Student::ShowStudent()
{
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;

}

void Student::Points() {
	for (int i = 0; i < SIZE; i++) {
		points[i] = 1 + rand() % 12;
	}
}


