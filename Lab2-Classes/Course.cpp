#include "Course.h"


Course::Course(std::string name, std::string description, Teacher teacher) : _courseName(name), _courseDescription(description), _teacher(teacher)
{	
}

Course::~Course()
{
}
