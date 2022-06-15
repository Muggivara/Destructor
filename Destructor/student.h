#pragma once
#include <iostream>
#include <windows.h>
using namespace std;



class Student
{
	string name;
	int  age;
	int* practice;
	int  rate_practic;
	int  practice_count;
	int* hometasks = nullptr; // динамический массив оценок
	int  dz_count = 0; // количество оценок в массиве
	int* exams;
	int  exams_count;
public:
	Student();
	void AddRate(int rate);
	void AddPractice(int rate_practice);
	void AddExam(int rate_exam);
	~Student();
	
};
