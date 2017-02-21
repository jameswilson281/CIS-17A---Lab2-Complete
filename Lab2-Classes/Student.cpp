#include "Student.h"

Student::Student()
{
	_name = "Null";
}
Student::Student(std::string name) : _name(name)
{
}

Student::~Student()
{
}
