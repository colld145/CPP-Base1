#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

struct Group {
	string name;
	Student* students;
	int size = 0;
	void CreateGroup();
	void AddStudent();
	void ShowGroup();


};