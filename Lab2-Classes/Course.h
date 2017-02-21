#pragma once
#include <string>
#include "Student.h"
#include "Teacher.h"
class Course
{
private:
	std::string _courseName;
	std::string _courseDescription;
	Student _students[10];
	Teacher _teacher;
public:	
	Course(std::string name, std::string description, Teacher teacher);
	~Course();

	bool AddStudent(Student newStudent, int position);
	std::string GetClassInfo();
};

