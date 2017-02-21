#pragma once
#include <string>
class Teacher
{
private:
	std::string _name;
	int _rating;
public:
	Teacher(std::string name);
	~Teacher();
};

