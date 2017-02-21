#include <iostream>
#include "Course.h"

using namespace std;

int main()
{
	auto cis17 = Course("CIS17A", "C++ Objects", Teacher("Wilson"));
	cis17.AddStudent(Student("Devon"), 0);
	cis17.AddStudent(Student("David"), 1);
	auto info = cis17.GetClassInfo();
	cout << info;
	getchar();
  return 0;
}

