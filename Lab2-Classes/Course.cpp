#include "Course.h"


Course::Course(std::string name, std::string description, Teacher teacher) : _courseName(name), _courseDescription(description), _teacher(teacher)
{	
}

Course::~Course()
{
}

bool Course::AddStudent(Student newStudent, int position)
{
	if (position <= 9 && _students[position].GetName() != "Null")
	{
		_students[position] = newStudent;
		return true;
	}
	return false;
}

std::string Course::GetClassInfo()
{
	std::string info = "Information for course " + _courseName + "\n";
	for (Student student : _students) {
		if (student.GetName() != "Null") {
			info += "Student " + student.GetName() + "\n";
		}
	}
	return info;
}
