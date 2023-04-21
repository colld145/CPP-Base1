#include "Group.h"
#include "Student.h"
#include <iostream>

using namespace std;

void Group::CreateGroup() {
	cout << "Enter name of the group: ";
	cin >> name;
	cout << "How many students do you want to add: ";
	cin >> size;
	students = new Student[size];
	for (int i = 0; i < size; i++)
	{
		students[i].AddNewStudent();
	}
	

}

void Group::AddStudent() {
	Student* tempArr = new Student[size + 1];
	for (int i = 0; i < size; i++) {
		tempArr[i] = students[i];
	}

	tempArr[size].AddNewStudent();
	delete[] students;
	students = tempArr;
	size++;

}

void Group::ShowGroup() {
	for (int i = 0; i < size; i++) {
		students[i].ShowStudent();
		cout << endl;
	}
}
