#include<iostream>
#include"Student.h"
using namespace std;

int main()
{
	Student obj1("Student1", 17);
	Student obj2("Student2", 33);
	obj1.Output();
	obj2.Output();
	Student obj3 = obj1;
	obj3.Output();
}