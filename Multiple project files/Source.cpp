#include <iostream>
#include "Student.h"
#include "Group.h"

using namespace std;

void Menu(int choice);

void main() {
	srand((unsigned)time(NULL));
	bool exit = false;
	Group newGroup;
	newGroup.CreateGroup();

	while (!exit) {

		int choice = 0;
		Menu(choice);
		if (choice == 1) {
			system("cls");
			newGroup.AddStudent();
		}
		else if (choice == 2) {
			system("cls");
			newGroup.ShowGroup();
		}
		else if (choice == 0) {
			exit++;
		}


	}

}

void Menu(int choice) {
	if (choice == 0) {
		cout << "1. Add student\n2. Show group\n0. Exit" << endl;
		cout << "Enter choice: ";
	}

}