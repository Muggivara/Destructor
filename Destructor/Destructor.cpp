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

	

	// так как в классе есть поле-указатель, под которое где-то (в конструкторе, сеттере, любом другом методе) была выделена память на этапе выполнения, то
	// эту память как-то необходимо возвращать системе во избежание утечек. можно сделать специальный метод-деструктор, который будет
	// вызываться автоматически в момент гибели объекта (при выгрузке со стека), и в этом методе можно будет выполнить вызовы оператора delete для всех указателей, которые хранили адреса динамической памяти
	// ~НазваниеКласса()
	// параметры в деструктор передать нельзя (нет смысла, так как объект уничтожается)
	// перегрузки деструктора невозможны по этой причине
	// в любом случае, в классе всегда есть деструктор - либо прописанный явно руками программиста, либо с пустым телом оформленный компилятором
	Student::~Student()
	{
		// основное назначение деструктора - очистка памяти
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





