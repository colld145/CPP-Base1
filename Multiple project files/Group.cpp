#include <iostream>
#include "Group.h"
#include "Student.h"

using namespace std;

void Group::CreateGroup() {
    cout << "Enter name of the group: ";
    cin >> nameGroup;
    students = new Student[size];

    Student student1;
    cout << "Create first student: " << endl;
    student1.Fill();
    students[0] = student1;
    

}

void Group::AddStudent() {

    Student* newStudent = new Student[size + 1];
    for (int i = 0; i < size; i++)
    {
        newStudent[i] = students[i];
    }
    newStudent[size].Fill();

    delete [] students;
    students = newStudent;
    size++;
    
}

void Group::PrintGroup() {

    Numbering(students, size);
    cout << "\tGroup: " << nameGroup << endl;
   
    for (int i = 0; i < size; i++)
    {
        students[i].Print();
        cout << endl;
    }
    

}


void Group::AddPoints(int student) {
    students[student - 1].FillPoints();
}

void Group::CheckPoints(int student) {
    if (students[student - 1].points[0] > 0 && students[student - 1].points[0] < 13) {

        students[student - 1].Print();
        cout << "Points: [ ";
        students[student - 1].PrintPoints();
        cout << " ]" << endl;

    }
    else {
        cout << "Student doesn't have any points... " << endl;
    }
    
}

void Group::PrintDebtors() {
    Numbering(students, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (students[i].points[j] < 6) {
                students[i].Print();
                cout << endl;
                break;
            }
        }
    }
}

int Group::Numbering(Student*& arr, int size) {
    int number = 1;
    for (int i = 0; i < size; i++) {
        arr[i].number = number;
        number++;
    }
    return 0;
}