#include <iostream>
#include "Student.h"
#include "Group.h"

using namespace std;

void Menu(); // Prototype

void main() {
    srand((unsigned)time(NULL));
    bool exit = false;
    Group newGroup;
    newGroup.CreateGroup();

    while (!exit)
    {
        int choice = 0;
        Menu();
        cin >> choice;
        if(choice == 1) {
            system("cls");
            newGroup.AddStudent();
        }
        else if(choice == 2) {
            system("cls");
            newGroup.PrintGroup();
        }
        else if (choice == 3) {
            system("cls");
            newGroup.PrintGroup();
            cout << "Choose a student's number: ";
            cin >> choice;
            system("cls");
            newGroup.AddPoints(choice);
        }
        else if (choice == 4) {
            system("cls");
            newGroup.PrintGroup();
            cout << "Choose a student's number: ";
            cin >> choice;
            system("cls");
            newGroup.CheckPoints(choice);
        }
        else if (choice == 5) {
            system("cls");
            cout << "\tDebtors:" << endl;
            newGroup.PrintDebtors();
        }
        else if(choice == 0) {
            exit = true;
        }
    }
    
}

void Menu() {
    cout << "============================" << endl;
    cout << "1. Add student\n2. Check group\n\n3. Fill points\n4. Check points\n\n5. Check debtors\n\n0. Exit" << endl;
    cout << "Enter choice: ";
}