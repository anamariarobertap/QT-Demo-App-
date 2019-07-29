#pragma once
#include <string>

class Student
{
	std::string name;
public:
	Student(std::string n) : name{ n } {};
	std::string get_name() { return name; }
	~Student();
};

