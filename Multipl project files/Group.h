#pragma once
#include "Student.h"
#include <string>


using namespace std;

struct Group {
    string nameGroup;
    Student* students;
    int size = 1;

    void CreateGroup();
    void AddStudent();
    void PrintGroup();
    void AddPoints(int student);
    void CheckPoints(int student);
    void PrintDebtors();
    int Numbering(Student*& arr, int size);

};