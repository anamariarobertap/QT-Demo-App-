/********************************************************************************
** Form generated from reading UI file 'QtDemoApp.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDEMOAPP_H
#define UI_QTDEMOAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDemoAppClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListView *listView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtDemoAppClass)
    {
        if (QtDemoAppClass->objectName().isEmpty())
            QtDemoAppClass->setObjectName(QStringLiteral("QtDemoAppClass"));
        QtDemoAppClass->resize(259, 271);
        centralWidget = new QWidget(QtDemoAppClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 231, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        listView = new QListView(verticalLayoutWidget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        QtDemoAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtDemoAppClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 259, 18));
        QtDemoAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtDemoAppClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtDemoAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtDemoAppClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtDemoAppClass->setStatusBar(statusBar);

        retranslateUi(QtDemoAppClass);

        QMetaObject::connectSlotsByName(QtDemoAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtDemoAppClass)
    {
        QtDemoAppClass->setWindowTitle(QApplication::translate("QtDemoAppClass", "QtDemoApp", nullptr));
        pushButton->setText(QApplication::translate("QtDemoAppClass", "ADD ALL", nullptr));
        pushButton_2->setText(QApplication::translate("QtDemoAppClass", "DELETE SELECTED", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtDemoAppClass: public Ui_QtDemoAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDEMOAPP_H
