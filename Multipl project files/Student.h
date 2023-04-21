#pragma once
#include <string>

using namespace std;


struct Student {
private:
    string name;
    string surname;
    unsigned int age;
public:
    int sizePoints = 5;
    int* points = new int[sizePoints];
    unsigned int number;
    void Fill();
    void Print();
    void FillPoints();
    void PrintPoints();
};