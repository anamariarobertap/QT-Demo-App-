#include "Repo.h"
#include <fstream>

Repo::Repo(const std::string & filename) : fileName{ filename }
{
	this->loadFromFile();
}

Repo::~Repo()
{
}

void Repo::remove_student(int pos) {
	this->students.erase(this->students.begin() + pos);

	this->saveToFile();
}

void Repo::saveToFile()
{
	std::ofstream f{ this->fileName };

	for (auto g : this->students)
		f << g.get_name() << std::endl;

	f.close();
}

void Repo::loadFromFile()
{
	std::ifstream f{ this->fileName };
	if (!f.is_open())
		return;

	std::string name;
	while (f >> name)
	{
		Student g{ name };
		this->students.push_back(g);
	}

	f.close();
}
