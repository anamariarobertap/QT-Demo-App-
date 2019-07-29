#pragma once
#include <string>
#include <vector>
#include "Student.h"

class Repo
{
private:
	std::vector<Student> students;
	std::string fileName;

public:
	Repo(const std::string& filename);
	~Repo();
	std::vector<Student> getStudents() const { return this->students; }

	void remove_student(int pos);

private:
	void loadFromFile();
	void saveToFile();
};

