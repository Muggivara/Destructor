#include "student.h"

    Student::Student()
    {
    	name = "Vasya Pupkin";
    	age = 30;
    }



	void Student::AddRate(int rate)
	{
		int* temp = new int[dz_count + 1];
		for (int i = 0; i < dz_count; i++)
		{
			temp[i] = hometasks[i];
		}
		temp[dz_count] = rate;
		delete[] hometasks;
		hometasks = temp;
		dz_count++;
	}



	void Student::AddPractice(int rate_practice)
	{
		int* temp = new int[practice_count + 1];
		for (int i = 0; i < practice_count; i++)
		{
			temp[i] = practice[i];
		}
		temp[practice_count] = rate_practice;
		delete[] practice;
		practice = temp;
		practice_count++;
	}


	void Student::AddExam(int rate_exam)
	{
		int* temp = new int[exams_count + 1];
		for (int i = 0; i < exams_count; i++)
		{
			temp[i] = hometasks[i];
		}
		temp[exams_count] = rate_exam;
		delete[] exams;
		exams = temp;
		exams_count++;
	}

	

	// ��� ��� � ������ ���� ����-���������, ��� ������� ���-�� (� ������������, �������, ����� ������ ������) ���� �������� ������ �� ����� ����������, ��
	// ��� ������ ���-�� ���������� ���������� ������� �� ��������� ������. ����� ������� ����������� �����-����������, ������� �����
	// ���������� ������������� � ������ ������ ������� (��� �������� �� �����), � � ���� ������ ����� ����� ��������� ������ ��������� delete ��� ���� ����������, ������� ������� ������ ������������ ������
	// ~��������������()
	// ��������� � ���������� �������� ������ (��� ������, ��� ��� ������ ������������)
	// ���������� ����������� ���������� �� ���� �������
	// � ����� ������, � ������ ������ ���� ���������� - ���� ����������� ���� ������ ������������, ���� � ������ ����� ����������� ������������
	Student::~Student()
	{
		// �������� ���������� ����������� - ������� ������
		cout << "Student D-TOR!\n";
		if (hometasks != nullptr)
		{
			delete[] hometasks;
			hometasks = nullptr;
		}
		if (practice != nullptr)
		{
			delete[]practice;
			practice = nullptr;
		}
		if (exams != nullptr)
		{
			delete[]exams;
			exams = nullptr;
		}
	}





