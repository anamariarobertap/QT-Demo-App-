#include "QtDemoApp.h"
#include <QtWidgets/QApplication>
#include "Repo.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repo repo{ "stud.txt" };

	QtDemoApp w{ repo };
	w.show();
	return a.exec();
}
