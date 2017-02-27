#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
	_name = "Null";
}
Student::Student(std::string name) : _name(name)
{
}

Student::~Student()
{
	cout << _name << " is out of scope" << endl;
}

std::string Student::GetName()
{
		return _name;
}
