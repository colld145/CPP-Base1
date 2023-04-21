#pragma once
#include <string>
#include "Group.h"

using namespace std;

struct Student {
	string name;
	string surname;
	const int SIZE = 10;
	int* points = new int[SIZE];
	void AddNewStudent();
	void ShowStudent();
	void Points();

};

