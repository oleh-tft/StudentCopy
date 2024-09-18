#include "Student.h"
#include<Windows.h>
#include<iostream>
using namespace std;

Student::Student()
{
	name = nullptr;
	age = 0;
}
Student::Student(const char* Name, int Age)
{
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
	age = Age;
}
Student::Student(const Student& obj)
{
	age = obj.age;
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
}
void Student::Output()
{
	cout << "Name: " << name << endl
		<< "Age: " << age << endl << endl;
}
Student::~Student()
{

	cout << "Destruct " << name << endl;
	delete[] name;

	Sleep(1000);

}