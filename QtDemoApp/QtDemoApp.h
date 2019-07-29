#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtDemoApp.h"
#include <QStringList>
#include <QStringListModel>
#include <QAbstractItemView>
#include "Repo.h"

class QtDemoApp : public QMainWindow
{
	Q_OBJECT

public:
	QtDemoApp(Repo repo, QWidget *parent = Q_NULLPTR);

	Repo repo;

private slots:
	void add_stuff();
	void delete_stuff();

private:
	Ui::QtDemoAppClass ui;
	QStringListModel *model;
};
