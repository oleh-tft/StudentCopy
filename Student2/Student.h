#pragma once

class Student
{
	char* name;
	int age;
public:
	////  prototype 
	Student();
	Student(const char*, int Age); // construct by 2 param
	Student(const Student& obj);
	void Output();
	~Student();

};