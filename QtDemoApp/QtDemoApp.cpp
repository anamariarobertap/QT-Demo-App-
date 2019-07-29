#include "QtDemoApp.h"

QtDemoApp::QtDemoApp(Repo r, QWidget *parent)
	: repo{ r }, QMainWindow(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.pushButton, &QPushButton::clicked, this, &QtDemoApp::add_stuff);
	QObject::connect(ui.pushButton_2, &QPushButton::clicked, this, &QtDemoApp::delete_stuff);
}


void QtDemoApp::delete_stuff() {
	model->removeRows(ui.listView->currentIndex().row(), 1);

	//update repo
	this->repo.remove_student(ui.listView->currentIndex().row());
}


void QtDemoApp::add_stuff()
{
	QStringList list;


	for (auto g : this->repo.getStudents())
		list.append(QString::fromStdString(g.get_name()));

	model = new QStringListModel(this);
	model->setStringList(list);

	ui.listView->setModel(model);
}